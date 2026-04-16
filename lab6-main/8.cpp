#include <iostream>
using namespace std;

void max(int a, int b, int c){
    int max = a;
    if (b>max)
        max = b;
    if (c>max)
        max = c;
    cout << "Max number is: " << max << endl;
}

void min(int a, int b, int c){
    int min = a;
    if (b<min)
        min = b;
    if (c<min)
        min = c;
    cout << "Min number is: " << min << endl;
}

int main(){   
    int a, b, c;
    cout<<"Enter three numbers: "<<endl;
    cin>>a>>b>>c;
    max(a,b,c);
    min(a,b,c);
    return 0;
}
