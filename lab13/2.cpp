#include <iostream>
using namespace std;

int main(){
    int b[5];
    int *bPtr = b;

    cout << "Enter value to array: "; 
    for (int i=0; i < 5; i++)
        cin >> *(bPtr+i);

    int sum = 0;
    int max = *(bPtr);

    for (int i = 0; i < 5; i++){
        sum += *(bPtr + i);
        if (*(bPtr + i) > max)
            max = *(bPtr + i);
    }
    cout << "Sum: " << sum << "\n" << "Max: " << max << endl;

    return 0;
}