#include <iostream>

using namespace std;

int main(){
    float numerador = 0, denominador = 1;
    cin >> numerador;
    cin >> denominador;

    if(denominador != 0)
        cout << "El resultado es: " << numerador / denominador << endl;
    else
        cout << "No se puede dividir por 0" << endl;

    return 1;
}