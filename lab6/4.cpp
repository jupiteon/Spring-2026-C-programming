#include <iostream>
using namespace std;

double rectangle(double a, double b) {
    return a*b;
}

double rectangle(double a, double b, bool peri) {
    if (peri)
        return 2 * (a + b);
    return 0;
}

int main() {
    double a, b;
    cout << "Enter side a: ";
    cin >> a;
    cout << "Enter side b: ";
    cin >> b;

    cout << "Area = " << rectangle(a, b) << endl;
    cout << "Perimeter = " << rectangle(a, b, true) << endl;

    return 0;
}
