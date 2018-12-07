#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Cliente {
	string nombre;
	int gastos;
	int piezas;
};

//Obtiene el precio de N piezas con cierto codigo
int obtenerPrecio(int codigo, int piezas) {
	int precioBase = 0;
	switch (codigo) {
	case 1:
		precioBase = 5;
		break;
	case 2:
		precioBase = 20;
		break;
	case 3:
		precioBase = 15;
		break;
	case 4:
		precioBase = 10;
		break;
	case 5:
		precioBase = 12;
		break;
	}
	return precioBase * piezas;
}

bool comparaClientes(Cliente a, Cliente b) {
	return a.gastos > b.gastos;
}

/*
	Problema 3.3
	Complejidad de tiempo: O(N log N)
*/
int main() {
	vector<Cliente> clientes;
	while (true) {
		string nombre;
		int codigo, cantidad;
		cin >> nombre >> codigo >> cantidad;
		if (nombre == "FIN" && codigo == 0 && cantidad == 0) {
			break;
		}
		bool clienteExistente = false;
		for (int i = 0; i < clientes.size(); i++) {
			if (clientes[i].nombre == nombre) {
				clienteExistente = true;
				clientes[i].gastos += obtenerPrecio(codigo, cantidad);
				clientes[i].piezas += cantidad;
			}
		}
		if (!clienteExistente) {
			Cliente nuevo;
			nuevo.nombre = nombre;
			nuevo.gastos = obtenerPrecio(codigo, cantidad);
			nuevo.piezas = cantidad;
			clientes.push_back(nuevo);
		}
	}
	sort(clientes.begin(), clientes.end(), comparaClientes);
	for (int i = 0; i < 3; i++) {
		cout << clientes[i].nombre << " " << clientes[i].gastos << " " << clientes[i].piezas << endl;
	}
}