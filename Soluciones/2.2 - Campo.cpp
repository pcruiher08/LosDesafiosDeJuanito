#include <iostream>
#include <cmath>

using namespace std;

//Un punto o vector en espacio tridimensional
struct Punto {
	float x;
	float y;
	float z;
};

//Regresa el vector de punto final - inicial
Punto VectorDistancia(Punto inicio, Punto fin) {
	Punto resultante;
	resultante.x = fin.x - inicio.x;
	resultante.y = fin.y - inicio.y;
	resultante.z = fin.z - inicio.z;
	return resultante;
}

//Regresa la magnitud de un vector
float Magnitud(Punto vector) {
	return sqrt(vector.x * vector.x + vector.y * vector.y + vector.z * vector.z);
}

//Multiplica un vector por un escalar
Punto EscalarVector(Punto vector, float escalar) {
	Punto resultante;
	resultante.x = vector.x * escalar;
	resultante.y = vector.y * escalar;
	resultante.z = vector.z * escalar;
	return resultante;
}

/*
	Problema 2.2
	Complejidad de tiempo: O(N)
*/
int main() {
	int cargas;
	Punto origen;
	cin >> cargas;
	cin >> origen.x >> origen.y >> origen.z;
	Punto vectorFinal;
	vectorFinal.x = 0;
	vectorFinal.y = 0;
	vectorFinal.z = 0;
	for (int i = 0; i < cargas; i++) {
		Punto ubicacion;
		int valor;
		cin >> valor;
		cin >> ubicacion.x >> ubicacion.y >> ubicacion.z;
		Punto vectorDistancia = VectorDistancia(origen, ubicacion);
		float distancia = Magnitud(vectorDistancia);
		float intensidad = 9 * valor / distancia;
		Punto vectorUnitaria = EscalarVector(vectorDistancia, 1 / distancia);
		Punto vectorCampo = EscalarVector(vectorUnitaria, intensidad);
		vectorFinal.x += vectorCampo.x;
		vectorFinal.y += vectorCampo.y;
		vectorFinal.z += vectorCampo.z;
	}
	cout << vectorFinal.x << " " << vectorFinal.y << " " << vectorFinal.z << " " << endl;
}