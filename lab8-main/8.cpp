#include <iostream>
#include <stdbool.h>
using namespace std;

bool strictlyEqual(const int list1[], const int list2[], int size){
    for (int i = 0; i<size; i++){
        if (list1[i]!=list2[i])
            return false;
    }
    return true;
}


void input(int arr[], int size){
    for (int i=1; i<=size; i++){
        cout << "Entry " << i << ": ";
        cin >> arr[i-1];
    }
    
}
void print(int arr[], int size){
    cout << "Array = [";
    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}

int main(){
    int n;
    cout << "Array 1, entries: ";
    cin >> n;
    int arr[n];
    
    input(arr, n);
    print(arr, n);
    
    
    int a;
    cout << "Array 2, entries: ";
    cin >> a;
    int arc[a];
    
    input(arc, a);
    print(arc, a);

    if (n != a)
        cout << "Are arrays strictly equal? --> False";
    else
        cout << "Are arrays strictly equal? --> " << (strictlyEqual(arr, arc, n) ? "True" : "False");
    
    return 0;
}
