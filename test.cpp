#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // points to arr[0]
    ptr++; // now points to arr[1]
    cout << *ptr; // prints 20
    cout << *(ptr + 2); // prints 40
    int size = sizeof(arr) / sizeof(int);
}