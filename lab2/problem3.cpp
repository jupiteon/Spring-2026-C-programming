#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    char b;

    cout << "Enter value for a: ";
    cin >> a;

    cout << "Enter value for b: ";
    cin >> b;
    
    float p1 = a/3;
    int p2=b;
    float p3 = (a+p2)/5;
    char temp = a/10-1;
    char p4 = b+temp;
    
    cout << p1 << " " << p2 << " " << p3 << " " << p4;

    return 0;
}
