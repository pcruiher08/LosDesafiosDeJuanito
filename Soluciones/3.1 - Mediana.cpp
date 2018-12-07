#include <iostream>
#include <algorithm>

using namespace std;

/*
	Problema 3.1
	Complejidad de tiempo: O(N log N)
*/
int main() {
	int n;
	cin >> n;
	int* edades;
	edades = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> edades[i];
	}
	//Ordenar el arreglo
	sort(edades, edades + n);
	//Calcular promedio y moda
	int suma = 0;
	int moda = -1;
	int repeticiones = 0;
	int actual = -1;
	int actualRepeticiones = 0;
	for (int i = 0; i < n; i++) {
		suma += edades[i];
		if (edades[i] == actual) {
			actualRepeticiones++;
		}
		else {
			if (actualRepeticiones > repeticiones) {
				repeticiones = actualRepeticiones;
				moda = actual;
			}
			actual = edades[i];
			actualRepeticiones = 1;
		}
	}
	if (actualRepeticiones > repeticiones) {
		repeticiones = actualRepeticiones;
		moda = actual;
	}
	float promedio = (float)suma / n;
	//Calcular la mediana
	float mediana = 0;
	if (n % 2 == 0) {
		mediana = (float)(edades[n / 2 - 1] + edades[n / 2]) / 2;
	}
	else {
		mediana = edades[n / 2];
	}
	cout << promedio << " " << mediana << " " << moda;
}