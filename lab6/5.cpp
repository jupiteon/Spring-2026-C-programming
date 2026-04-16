#include <iostream>
using namespace std;

void swap(int &a, int &b){
    a = a+b;
    b = a-b;
    a = a-b;
    cout << "After swap:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

int main() {
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    swap(a, b);

    return 0;
}
