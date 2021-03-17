#include <iostream>

using namespace std;

int main(){

    int filas, columnas, **matriz;
    cin >> filas;
    cin >> columnas;

    matriz = new int*[filas];
    for(int i = 0; i < filas; i++) matriz[i] = new int[columnas];

    for(int i = 0; i < filas; i++)
        for(int j = 0; j < columnas; j++){
            cout << i << "." << j;
            cin >> *(*(matriz + i) + j);
        }

    for(int i = 0; i < filas; i++){
        cout << endl;
        for(int j = 0; j < columnas; j++)
            cout << *(*(matriz + i) + j);
    }
    delete[] matriz;
    return 0;
}