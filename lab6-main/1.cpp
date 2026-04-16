// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void fun(int x, int y) {
    return x*y;
}

int main() {
    int x, y;
    cout << "Enter number 1: ";
    cin >> x;
    cout << "Enter number 2: ";
    cin >> y;
    cout << product(x, y);
    return 0;
}
