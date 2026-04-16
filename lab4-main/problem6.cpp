#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int c;
    
    cout << "Input three numbers: ";
    cin >> a >> b >> c;
    
    if (a >= b && a >= c) {
        cout << "Largest number is " << a << endl;
    } 
    else if (b >= c) {
        cout << "Largest number is " << b << endl;
    } 
    else if (b < c) {
        cout << "Largest number is " << c << endl;
    } 
    else {
        cout << "No largest number can be found";
    }

    return 0;
}
