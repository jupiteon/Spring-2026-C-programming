// Problem 1

// 1. Declare an integer type variable name intNumber and assign
// it a number of students sitting in the lab.
// 2. Declare a float type variable name floatNumber and assign a number of π.

// 3. Declare a double type variable name doubleNumber and as- sign it a value of 45.1234.

// 4. Declare a bool type variable name boolean and assign it a value of true.
// 5. Declare a char type variable name charName and assign it a value of A.
// 6. Lastly, print the values of all declared variables and their sizes using sizeof(variable name) function. 


#include <iostream>
using namespace std;

int main() {
    int intNumber = 25; 

    float floatNumber = 3.14159;

    double doubleNumber = 45.1234;

    bool boolean = true;

    char charName = 'A';

    cout << "intNumber value: " << intNumber << " | size : " << sizeof(intNumber) << " bytes" << endl;

    cout << "floatNumber value: " << floatNumber << " | size: " << sizeof(floatNumber) << " bytes" << endl;

    cout << "doubleNumber value: " << doubleNumber  << " | size: " << sizeof(doubleNumber) << " bytes" << endl;

    cout << "boolean value: " << boolean  << " | size: " << sizeof(boolean) << " bytes" << endl;

    cout << "charName value: " << charName  << " | size: " << sizeof(charName) << " bytes" << endl;

    return 0;
}
