#include <iostream>
using namespace std;

int s(int n){
    if (n <= 0)
        return 0;
    return (n%10+s(n/10));
}

int main(){
    int n;
    cout << "Enter number: " << endl; cin >> n;
    cout << "Sum of digits: " << s(n) << endl;
    return 0;
}
