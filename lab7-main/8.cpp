#include <iostream>
using namespace std;

int m(int a, int b){
    if (b<=1)
        return a;
    return a+m(a, b-1);
}

int main(){
    int a;
    int b;
    cout << "Enter number: " << endl; cin >> a;
    cout << "Enter multiplier: " << endl; cin >> b;
    cout << "Product: " << m(a,b) << endl;
    return 0;
}
