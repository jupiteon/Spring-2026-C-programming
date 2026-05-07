#include <iostream>
using namespace std;

void fun(int r) {
    float pi = 3.14159265359;
    float circ = 2*pi*r;
    float area = pi*r*r;
    cout << "Circumference = " << circ << "\n";
    cout << "Area = " << area;
}
int main() {
    double r;
    cout << "Enter radius of a circle: ";
    cin >> r;
    fun(r);
    return 0;
}
