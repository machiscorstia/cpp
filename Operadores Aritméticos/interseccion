#include <iostream>

using namespace std;

int main(){

    float m1, m2, b1, b2;
    float px, py;
    
    cin >> m1 >> b1 >> m2 >> b2;

    cout << "Primera recta y=" << m1 << "x" << showpos << b1 << noshowpos << endl;
    cout << "Segunda recta y=" << m2 << "x" << showpos << b2 << noshowpos << endl;
    
    if(m1 == m2){
        cout << "No tienen interseccion" << endl;
        return 0;
    }

    px = (b2 + (b1 * -1)) / (m1 + (m2 * -1));
    py = (px * m1) + b1;

    cout << "Intersectan en: (" << px << ";" << py << ")";

    return 0;
}
