#include <iostream>

using namespace std;

/*
	Problema 1.2
	Complejidad de tiempo: O(1)
*/
int main() {
	int puntos;
	cin >> puntos;
	//Solo los primeros tres puntos son relevantes
	int alturas[3];
	for (int i = 0; i < 3; i++) {
		cin >> alturas[i];
	}
	//Calcula la concavidad utilizando la pendiente de las pendientes
	float discriminante = alturas[2] - 2 * alturas[1] + alturas[0];
	if (discriminante > 0) {
		cout << "ARRIBA";
	}
	else if (discriminante < 0) {
		cout << "ABAJO";
	}
	else {
		cout << "LINEA";
	}
	//Descarta los demas puntos
	for (int i = 3; i < puntos; i++) {
		int basura;
		cin >> basura;
	}
}