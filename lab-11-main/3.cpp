#include <iostream>
using namespace std;

int main() {
    const int size = 1000;
    char text[size];

    cout << "Input a word: ";
    cin.getline(text, size);

    int count = 0;

    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u' || 
        text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U') {
            count++;
        }
    }

    cout << "Vowels: " << count << endl;

    return 0;
}
