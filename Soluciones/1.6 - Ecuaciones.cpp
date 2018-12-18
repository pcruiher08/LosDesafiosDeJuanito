#include <iostream>
#include <cmath>

using namespace std;

int rows;
int cols;
float matriz[1000][1000];

void solveMatrix(){
    int max = 0; 
    while (max < rows) {
        float uno, dos;
        for(int i = 0; i < rows; i++){
            uno = matriz[max][max];
            dos = matriz[i][max] / matriz[max][max];
            for (int j = 0; j< cols; j++){
                if (i == max){
                    matriz[i][j] /= uno;
                }else{
                    matriz[i][j] -= matriz[max][j] * dos;
                }
            }
        }
        max++;
    }
}

void printAnswer(){
    for (int i=0; i<rows; i++) {
        cout << round(matriz[i][cols-1]) << " ";
    }
    cout << endl;
}

int main(){
    cin >> rows;
    cols = rows + 1;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> matriz[i][j];
        }
    }
    solveMatrix();
    printAnswer();
}