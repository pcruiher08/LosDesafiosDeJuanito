#include <iostream>

using namespace std;

/*
	Problema 4.1
	Complejidad de tiempo: O(N)
*/
int main() {
	int capacitores;
	cin >> capacitores;
	float valorMaximo = 0;
	int indiceMaximo = 0;
	for (int i = 0; i < capacitores; i++) {
		int capacitancia, voltaje, corriente;
		cin >> capacitancia >> voltaje >> corriente;
		float valor = capacitancia * voltaje * voltaje / 2 + voltaje * corriente;
		if (valor > valorMaximo) {
			valorMaximo = valor;
			indiceMaximo = i;
		}
	}
	cout << valorMaximo << " " << (indiceMaximo + 1);
}