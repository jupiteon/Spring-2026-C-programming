#include <iostream>
using namespace std;

int main() {
    const int size = 1000;
    char text[size];

    cout << "Input a word: ";
    cin.getline(text, size);
    
    int i = 0;
    while (text[i]!='\0'){i++;};
    cout << "Reverse: ";
    while (i>=0){cout << text[i]; i--;}
    
    return 0;
}
