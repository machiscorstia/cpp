#include <iostream>

using namespace std;

void intercambiar(int*, int*);

int main(){
    int primerNumero = 2, segundoNumero = 4;
    intercambiar(&primerNumero, &segundoNumero);
    cout << primerNumero << segundoNumero << endl;
    return 0;
}

void intercambiar(int *primerDireccion, int *segundoDireccion){
    int auxiliar;
    auxiliar = *primerDireccion;
    *primerDireccion = *segundoDireccion;
    *segundoDireccion = auxiliar;
}