#include <iostream>

using namespace std;

int main(){
    int numeros[] = {1, 2, 3};
    int *direccion = numeros;

    for(int i = 0; i < 3; i++)
        cout << "Direccion: " << direccion++ << endl;

    return 0;
}