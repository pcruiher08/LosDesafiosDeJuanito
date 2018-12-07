#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

enum Operador { RAIZ, AND, OR, NOT, NOR, NAND, XOR, XNOR, TRUE, FALSE };

struct Nodo {
	Operador tipo;
	Nodo* previo;
	Nodo* a;
	Nodo* b;
};

Nodo* cabeza;

/*
	Problema 4.3
*/
int main() {
	string linea;
	getline(cin, linea);
	vector<string> operadores;
	vector<char> temp;
	//Separa los operadores y valores en un vector
	for (int i = 0; i < linea.length(); i++) {
		if (linea[i] == '(' || linea[i] == ',') {
			string str(temp.begin(), temp.end());
			operadores.push_back(str);
			temp.clear();
		} else if (linea[i] != ')' && linea[i] != ' ') {
			temp.push_back(linea[i]);
		}
	}
	string str(temp.begin(), temp.end());
	operadores.push_back(str);
	//Construye el grafo
	cabeza = new Nodo;
	cabeza->tipo = RAIZ;
	cabeza->a = NULL;
	cabeza->b = NULL;
	queue<Nodo*> hojas;
	for (int i = 0; i < operadores.size(); i++) {
		Nodo* siguiente = new Nodo;
		siguiente->a = NULL;
		siguiente->b = NULL;
		siguiente->previo = cabeza;
		if (operadores[i] == "TRUE") {
			siguiente->tipo = TRUE;
			if (cabeza->a == NULL) {
				cabeza->a = siguiente;
				if (cabeza->tipo == NOT) {
					hojas.push(cabeza);
				}
			} else {
				cabeza->b = siguiente;
				if (cabeza->a->tipo == TRUE || cabeza->a->tipo == FALSE) {
					hojas.push(cabeza);
				}
			}
			if (cabeza->tipo == NOT) {
				while (cabeza->tipo == NOT) {
					cabeza = cabeza->previo;
				}
			} else {
				if (cabeza->b != NULL) {
					cabeza = cabeza->previo;
					while (cabeza->tipo == NOT) {
						cabeza = cabeza->previo;
					}
				}
			}
		} else if (operadores[i] == "FALSE") {
			siguiente->tipo = FALSE;
			if (cabeza->a == NULL) {
				cabeza->a = siguiente;
				if (cabeza->tipo == NOT) {
					hojas.push(cabeza);
				}
			} else {
				cabeza->b = siguiente;
				if (cabeza->a->tipo == TRUE || cabeza->a->tipo == FALSE) {
					hojas.push(cabeza);
				}
			}
			if (cabeza->tipo == NOT) {
				while (cabeza->tipo == NOT) {
					cabeza = cabeza->previo;
				}
			} else {
				if (cabeza->b != NULL) {
					cabeza = cabeza->previo;
					while (cabeza->tipo == NOT) {
						cabeza = cabeza->previo;
					}
				}
			}
		} else {
			if (cabeza->a == NULL) {
				cabeza->a = siguiente;
			} else if (cabeza->b == NULL) {
				cabeza->b = siguiente;
			} else {
				while (cabeza->b != NULL || cabeza->tipo == NOT) {
					cabeza = cabeza->previo;
				}
				cabeza->b = siguiente;
			}
			if (operadores[i] == "AND") {
				siguiente->tipo = AND;
			} else if (operadores[i] == "OR") {
				siguiente->tipo = OR;
			} else if (operadores[i] == "NOT") {
				siguiente->tipo = NOT;
			} else if (operadores[i] == "NOR") {
				siguiente->tipo = NOR;
			} else if (operadores[i] == "NAND") {
				siguiente->tipo = NAND;
			} else if (operadores[i] == "XOR") {
				siguiente->tipo = XOR;
			} else if (operadores[i] == "XNOR") {
				siguiente->tipo = XNOR;
			}
			cabeza = siguiente;
		}
	}
	//Evalua el grafo
	while (hojas.size() > 0) {
		Nodo* hojaActual = hojas.front();
		hojas.pop();
		if (hojaActual->tipo == RAIZ || hojaActual->tipo == TRUE || hojaActual->tipo == FALSE) {
			continue;
		}
		if (hojaActual->tipo == NOT) {
			if (hojaActual->a->tipo == TRUE) {
				hojaActual->tipo = FALSE;
				hojas.push(hojaActual->previo);
			} else if (hojaActual->a->tipo == FALSE) {
				hojaActual->tipo = TRUE;
				hojas.push(hojaActual->previo);
			} else {
				hojas.push(hojaActual);
			}
		}
		else {
			if ((hojaActual->a->tipo == TRUE || hojaActual->a->tipo == FALSE) && (hojaActual->b->tipo == TRUE || hojaActual->b->tipo == FALSE)) {
				switch (hojaActual->tipo) {
				case AND:
					if (hojaActual->a->tipo == TRUE && hojaActual->b->tipo == TRUE) {
						hojaActual->tipo = TRUE;
					} else {
						hojaActual->tipo = FALSE;
					}
					break;
				case OR:
					if (hojaActual->a->tipo == TRUE || hojaActual->b->tipo == TRUE) {
						hojaActual->tipo = TRUE;
					} else {
						hojaActual->tipo = FALSE;
					}
					break;
				case NAND:
					if (hojaActual->a->tipo == TRUE && hojaActual->b->tipo == TRUE) {
						hojaActual->tipo = FALSE;
					} else {
						hojaActual->tipo = TRUE;
					}
					break;
				case NOR:
					if (hojaActual->a->tipo == TRUE || hojaActual->b->tipo == TRUE) {
						hojaActual->tipo = FALSE;
					} else {
						hojaActual->tipo = TRUE;
					}
					break;
				case XOR:
					if ((hojaActual->a->tipo == TRUE) ^ (hojaActual->b->tipo == TRUE)) {
						hojaActual->tipo = TRUE;
					} else {
						hojaActual->tipo = FALSE;
					}
					break;
				case XNOR:
					if ((hojaActual->a->tipo == TRUE) ^ (hojaActual->b->tipo == TRUE)) {
						hojaActual->tipo = FALSE;
					} else {
						hojaActual->tipo = TRUE;
					}
					break;
				}
				hojas.push(hojaActual->previo);
			} else {
				hojas.push(hojaActual);
			}
		}
	}
	//Juanito se regresa a sus raices
	while (cabeza->tipo != RAIZ) {
		cabeza = cabeza->previo;
	}
	if (cabeza->a->tipo == TRUE) {
		cout << "TRUE";
	} else {
		cout << "FALSE";
	}
}