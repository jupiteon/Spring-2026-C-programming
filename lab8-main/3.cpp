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
    int sum=0;
    cout << "Average: ";
    for (int i=0; i<n; i++){
        sum+=arr[i];
    }
    cout<<sum/n;
    
    return 0;
}
