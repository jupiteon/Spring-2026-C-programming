#include <iostream>
using namespace std;

int c(int n){
    if (n/10<=0)
        return 1;
    return (1+c(n/10));
}

int main(){
    int n;
    cout << "Enter number: " << endl; cin >> n;
    cout << "Count of digits: " << c(n) << endl;
    return 0;
}
