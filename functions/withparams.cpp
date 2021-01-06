#include <iostream>
#include <string>

using namespace std;

void say(string value){
    cout << value;
};

int main(){
    string temp_value;
    cin >> temp_value;
    say(temp_value);
    return 0;
};
