#include <iostream>
#include <stdlib.h>

using namespace std;

void ordenar(int*, int);

int main(){

    int cantidad, *array;

    cin >> cantidad;
    array = new int[cantidad];

    for(int i = 0; i < cantidad; i++) cin >> *(array + i);

    ordenar(array, cantidad);

    for(int i = 0; i < cantidad; i++) cout << *(array + i);
    
    delete[] array;
    
    return 0;
}

void ordenar(int *array, int size){
    int auxiliar;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < (size - 1); j++){
            if(*(array + j) > *(array + i)){
                auxiliar = *(array + j);
                *(array + j) = *(array + i);
                *(array + i) = auxiliar; 
            }
        }
    }
}