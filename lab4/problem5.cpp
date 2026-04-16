#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    
    cout << "Input two numbers: ";
    cin >> a >> b;
    
    if (a>b) {
        cout << "Largest number is " << a << endl;
    } 
    else if (a < b) {
        cout << "Largest number is " << b << endl;
    } 
    else if (a==b) {
        cout << "Largest number is both: " << a << " and " << b << endl;
    } 
    else {
        cout << "No largest number can be found";
    }

    return 0;
}
