#include <iostream>
using namespace std;

int power(int base, int e){
    if (e==1)
        return base;
    return base*power(base, e-1);
}

int main(){
    int base;
    int e;
    cout << "Enter base number : " << endl; cin >> base;
    cout << "Enter exponent: " << endl; cin >> e;
    cout << base << " in power of " << e << " is " << power(base, e);
    return 0;
}
