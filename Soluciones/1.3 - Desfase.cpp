#include <iostream>

using namespace std;

/*
	Problema 1.3
	Complejidad de tiempo: O(1)
*/
int main() {
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	float productoPunto = a * d + b * e + c * f;
	//El angulo es agudo cuando el producto punto es positivo
	if (productoPunto > 0) {
		cout << "SI";
	}
	else {
		cout << "NO";
	}
}