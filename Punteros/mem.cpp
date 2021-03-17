#include <iostream>

using namespace std;

int main(){
    int numero = 10;

    // guarda la direccion de memoria de la variable numero
    int *direccion = &numero;

    cout << "Valor variable: " << numero << endl;
    cout << "Direccion de memoria: " << direccion;

    return 0;
}