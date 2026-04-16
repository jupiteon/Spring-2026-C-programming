#include <iostream>
using namespace std;

int main() {
    const int size = 1000;
    char text[size];

    cout<<"Input anything: ";
    cin.getline(text, size);
    cout << "Text: " << text << endl;

    int c = 0;
    while (text[c] != '\0') {
        c++;
    }
    
    cout << "Length: " << c << endl;

    return 0;
}
