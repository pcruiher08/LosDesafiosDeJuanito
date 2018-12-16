#include <iostream>

using namespace std;

int main() {
    int pizzas;
    cin >> pizzas;
    int max = 0;
    for(int i = 0; i < pizzas; i++) {
        int moneda;
        cin >> moneda;
        if(moneda > max) {
            max = moneda;
        }
    }
    if(max % 2 == 0) {
        cout << "hawaiiana";
    } else { 
        cout << "pepperoni";
    }
}