#include <iostream>
using namespace std;
void fun(int arr[], int size){
    cout << "Even: ";
    for (int i = 0; i<size; i++){
        if (arr[i]%2==0){
            cout << arr[i] << ", ";
        }
    }
    cout << "\nOdd: ";
    for (int i = 0; i<size; i++){
        if (arr[i]%2!=0){
            cout << arr[i] << " ";
        }
    }
}

int main(){
    int n;
    cout << "Number of entries: ";
    cin >> n;
    int arr[n];
    for (int i=1; i<=n; i++){
        cout << "Entry " << i << ": ";
        cin >> arr[i-1];
    }
    fun(arr, n);
    
    return 0;
}
