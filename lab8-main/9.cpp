#include <iostream>
#include <stdbool.h>
using namespace std;

int indexOfLargestElement(double arr[], int size, double &max){
    if (size<=0){
        return -1;
    }
    
    int index = 0;
    max = arr[0];
    for (int i = 0; i<size; i++){
        if (arr[i]>max){
            max = arr[i];
            index = i;
        }
    }
    return index+1;
}


void input(double arr[], int size){
    cout << "Array has 15 entries. Input them:\n" << endl;
    for (int i = 0; i<size; i++){
        cin>>arr[i];
    }
}
void print(double arr[], int size){
    cout << "Array = [";
    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}

int main(){
    int n = 15;
    double arr[n];
    double max;
    
    input(arr, n);
    print(arr, n);
    cout << "Within order of " << indexOfLargestElement(arr, n, max) << " is largest value - " << max;
    return 0;
}
