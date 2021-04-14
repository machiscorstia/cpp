#include <iostream>
#include <string>

using namespace std;

int main(){
    int data[3] = {0, 0, 0};
    string fecha;

    for(int i = 0; i < size(data); i++){
        cin >> data[i];
        fecha += to_string(data[i]);
    }
    
    cout << fecha << endl;

    return 1;
}

