#include <iostream>
using namespace std;
long  fact(int n){
    int a=1;
    for (int i=1; i<=n; i++){
        a *= i;
    };
    return a;
}
    
int main() {
    int a;
    cout<<"Enter an integer: ";
    cin>>a;
    cout<<fact(a);
    return 0;
}
