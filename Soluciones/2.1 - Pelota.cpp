#include <iostream>

using namespace std;

/*
	Problema 2.1
	Complejidad de tiempo: O(N)
*/
int main() {
	int n, xInicial;
	cin >> n >> xInicial;
	for (int i = 0; i < n; i++) {
		int xFinal, millisegundos;
		cin >> xFinal >> millisegundos;
		cout << (float)(xFinal - xInicial) / millisegundos << endl;
		xInicial = xFinal;
	}
}