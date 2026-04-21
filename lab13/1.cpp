#include <iostream>
using namespace std;

int main(){
    int b[] = {10, 20, 30, 40};
    int *bPtr = b;

    for (int i = 0; i < 4; i++){
        cout << "b[" << i << "]=" << b[i]
            << " *(b+" << i << ")=" << *(b + i)
            << " bPtr[" << i << "]=" << bPtr[i]
            << " *(bPtr+" << i << ")=" << *(bPtr + i) << endl;
    }

    return 0;
}
