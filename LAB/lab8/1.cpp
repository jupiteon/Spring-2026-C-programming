#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Number of entries: ";
    cin >> n;
    int arr[n];
    for (int i=1; i<=n; i++){
        cout << "Entry " << i << ": ";
        cin >> arr[i-1];
    }
    cout << "Array: ";
    for (int i=0; i<n; i++){
        cout << "["<<i<<"]: "<<arr[i] << ", ";
    }
    
    return 0;
}
