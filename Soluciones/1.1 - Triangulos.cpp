#include <iostream>
#include <cmath>

using namespace std;

/*
	Problema 1.1
	Complejidad de tiempo: O(1)
*/
int main() {
	int casos;
	cin >> casos;
	for (int i = 0; i < casos; i++) {
		int lado;
		cin >> lado;
		float altura = lado * sqrt(3) / 2;
		cout << altura;
	}
}