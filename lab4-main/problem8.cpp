#include <iostream>
using namespace std;
    //Determine pass or fail based on marks. 
    // 1. Take marks as input. 
    // 2. If marks are 50 or above, print ”Pass”, else print ”Fail”.
int main() {
    int a;
    
    cout << "Input mark number: ";
    cin >> a;
    
    if (a>=50) {
        cout << "Pass";
    }
    
    else {
        cout << "Fail";
    }

    return 0;
}
