// Problem 9
// Categorize a number as positive, negative, or zero
// using nested if/else.
// 1. Take a number as input.
// 2. Use nested if/else to categorize the number.
// 3. Print the category.
#include <iostream>
using namespace std;

int main() {
    int speed1;
    int speed2;
    int speed3;
    int monthlyPayment;
    double avgSpeed;
    int loyaltyYears;
    int outstandingBalance;
    
    cout << "Enter speed1 speed2 speed3 monthlyPayment loyaltyYears outstandingBalance:\n";
    cin >> speed1 >> speed2 >> speed3 >> monthlyPayment >> loyaltyYears >> outstandingBalance;
    
    avgSpeed = (speed1 + speed2 + speed3) / 3.0;
    
    avgSpeed = (speed1+speed2+speed3)/3;
    cout << "Average speed: " << avgSpeed << endl;
    
    if (
        (avgSpeed>=100) && 
        ((monthlyPayment>=50) || (loyaltyYears>=3)) &&
        (outstandingBalance<=0)
        )
    {
        cout << "UPGRADE";
    }
    else {
        cout << "NO UPGRADE";
    }

    return 0;
}
