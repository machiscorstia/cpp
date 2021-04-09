#include <iostream>
#include <vector>
#include <math.h> 

using namespace std;

#define R 3

class CVector{
    public: 
        void mostrar(vector<int> v){ for(auto i= v.begin(); i != v.end(); i++) cout << *i << " "; }
        float cnorma(vector<int> v){ return sqrt(pow(v.at(0), 2) + pow(v.at(1), 2) + pow(v.at(2), 2)); }      
};

int main(){
    int aux = 0;
    vector<int> v;
    string sr = "xyz";
    CVector m = CVector();

    v.resize(R);

    for(int i=0; i<R; i++){
        cout << sr[i] << ": "; cin >> aux;
        v.at(i) = aux;
    }

    float modulo = m.cnorma(v);
    cout << "Modulo: " << modulo;

    return 0;
}

