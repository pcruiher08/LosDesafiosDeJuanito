#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
	Problema 4.2
	Complejidad de tiempo: O(N)
*/
int main() {
	string entrada;
	getline(cin, entrada);
	vector<float> resistencias;
	vector<char> operadores;
	float resistencia = 0;
	for (int i = 0; i < entrada.length(); i++) {
		if (entrada[i] == '|' || entrada[i] == '+') {
			resistencias.push_back(resistencia);
			resistencia = 0;
			operadores.push_back(entrada[i]);
		}
		else if (entrada[i] != ' ') {
			resistencia *= 10;
			resistencia += entrada[i] - 48;
		}
	}
	resistencias.push_back(resistencia);
	for (int i = 0; i < operadores.size(); i++) {
		if (operadores[i] == '+') {
			resistencias[i + 1] += resistencias[i];
		}
		else if (operadores[i] == '|') {
			resistencias[i + 1] = resistencias[i] * resistencias[i + 1] / (resistencias[i] + resistencias[i + 1]);
		}
	}
	cout << resistencias[resistencias.size() - 1];
}