#include <iostream>
using namespace std;
    //Write a program that prompts the user to enter the speed of a vehicle. If speed is less than 20, display too slow; if speed is greater than 80, display too fast; otherwise, display just right.
int main() {
    int a;
    
    cout << "Input speed of a vehicle: ";
    cin >> a;
    
    if (a<20) {
        cout << "Too slow";
    }
    
    else if (a>80) {
        cout << "Too fast";
    }
    else {
        cout << "Just right";
    }

    return 0;
}
