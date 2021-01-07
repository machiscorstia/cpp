#include <iostream>
#include <string.h>

#define EOL     '\n'

using namespace std;

int ex_num(string str = 0){
    int i = -1;
    while(i++ < str.size()){
        cout << str[i];
    };
    return 0;
}

int sum(string str){
    int total = 0;
    return total;
}

int main(){
    string temp;
    cout << "Ejemplo: 1+2-3" << endl;
    cout << "Introduce la operacion: ";
    cin >> temp;
    ex_num(temp);
    return 0;
}

