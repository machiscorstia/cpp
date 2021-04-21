#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int actual_date = 0, first_date = 0, second_date = 0, result = 0;

    cin >> actual_date >> first_date >> second_date;

    if(first_date == second_date){
        cout << "Son guales" << endl;
        return 0;
    }

    result = abs(actual_date - first_date) < abs(actual_date - second_date) ? first_date : second_date;
    
    cout << "Fecha mas reciente: " << result;

    return 0;
};
