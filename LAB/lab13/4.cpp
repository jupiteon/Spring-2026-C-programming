#include <iostream>
using namespace std;

int main(){
    int num;
    const char *days[7] = {"Monday","Tuesday","Wednesday",
        "Thursday","Friday","Saturday","Sunday"};
    cout<<"Enter day number: ";
    cin>>num;
    switch(num){
        case 1: cout << days[0]; break;
        case 2: cout << days[1]; break;
        case 3: cout << days[2]; break;
        case 4: cout << days[3]; break;
        case 5: cout << days[4]; break;
        case 6: cout << days[5]; break;
        case 7: cout << days[6]; break;
        default: cout << "Invalid";
    }

    return 0;
}