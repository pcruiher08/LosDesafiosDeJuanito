#include <iostream>

using namespace std;

int main() {
    int centroX, centroY, fuerzas;
    cin >> centroX >> centroY >> fuerzas;
    int total = 0;
    for(int i = 0; i < fuerzas; i++) {
        int puntoX, puntoY, fuerzaX, fuerzaY;
        cin >> puntoX >> puntoY >> fuerzaX >> fuerzaY;
        int deltaX = puntoX - centroX;
        int deltaY = puntoY - centroY;
        total += deltaX * fuerzaY - deltaY * fuerzaX;
    }
    cout << total << endl;
}