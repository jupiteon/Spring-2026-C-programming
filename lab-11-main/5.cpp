#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int size = 1000;
    char text[size];

    cout << "Input a sentence: ";
    cin.getline(text, size);
    
    int i = 0;
    int n = 0;

    if (text[0] != '\0') {
        n = 1;
    }

    while (text[i] != '\0') {
        if (text[i] == ' ' && text[i+1] != ' ' && text[i+1] != '\0') {
            n++;
        }
        
        i++;
    }

    cout << "Words: " << n << endl;
    
    return 0;
}
