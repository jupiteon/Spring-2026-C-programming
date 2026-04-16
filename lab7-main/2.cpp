#include <iostream>
using namespace std;

int sumN(int n){
    if (n==1)
        return 1;
    return n+sumN(n-1);
}

int main(){
    int n;
    cout << "Enter number for sumN: " << endl;
    cin >> n;
    cout << "SumN of " << n << " is " << sumN(n);
    return 0;
}
