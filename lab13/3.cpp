#include <iostream>
using namespace std;

void copyString(char *s1, const char *s2){
    while (*s2 != '\0'){
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
}

int main(){
    char orig[100];
    char copy[100];

    cout<<"Enter string values of array: ";
    cin >> orig;
    copyString(copy, orig);

    cout << "Copy: " << copy << endl;

    return 0;
}
