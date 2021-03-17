#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int cantidad, *array;
    cin >> cantidad;
    array = new int[cantidad];

    // usar el array..

    delete[] array;
    
    return 0;
}