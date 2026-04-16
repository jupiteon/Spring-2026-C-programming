#include <iostream>
using namespace std;

int down(int n){
    cout << n << " ";
    if (n==2){
        return 1;
    };
    return down(n-1);
}

int up(int n){
    if (n == 1){
        cout << "1";
        return 1;
    }
    up(n - 1);
    cout << " " << n;
    return n;
}

int main(){
    int n;
    cout << "Enter number for count: " << endl; cin >> n;
    cout << "DownCount: " << down(n) << endl;
    cout << "UpCount: "; up(n);
    return 0;
}
