#include <iostream>
using namespace std;
void fun(int arr[], int size){
    bool is;
    cout << "Is array sorted? => ";
    int a = arr[0];
    for (int i = 0; i<size; i++){
        if (arr[i]>=a){
            a=arr[i];
        }
        else{
            is=0;
            cout<<"NO";
            break;
        }
    }
    if (!is)
        cout << "YES"<<endl;
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
    cout << "Number of entries: ";
    cin >> n;
    int arr[n];

    input(arr, n);
    print(arr, n);
    fun(arr, n);
    
    return 0;
}
