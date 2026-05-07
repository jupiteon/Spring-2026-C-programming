#include <iostream>
using namespace std;
int fun(int arr[], int size){
    int a = arr[0];
    for (int i = 0; i<size; i++){
        if (arr[i]<a)
            a=arr[i];
    }
    return a;
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
    
    cout << "Minimum: " << fun(arr, n);
    
    return 0;
}
