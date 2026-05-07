#include <iostream>
using namespace std;

struct BankAccount{
    char name[50];
    int accountNo;
    double Balance;
};

void deposit(BankAccount &acc, double amount){
    cout<<"Deposit Value: ";
    cin >> amount;
    acc.Balance += amount;
}

void withdraw(BankAccount &acc, double amount){
    do {cout<<"Withdrawal Value: "; 
        cin >> amount; if (acc.Balance<amount){cout<<"\nInsufficient balance";} } 
        while(acc.Balance<amount);
    acc.Balance -= amount;
}

int main(){
    BankAccount user;
    cout << "Input name: ";
    cin >> user.name;
    cout << "Input account number: ";
    cin >> user.accountNo;
    cout << "Input Balance: ";
    cin >> user.Balance;

    double damount; 
    double wamount;

    deposit(user, damount);
    withdraw(user, wamount);
    if (damount==wamount){
        cout<<"Balance is the same";
    }
    else if (damount<wamount){
        cout<<"Withdrewn: "<<wamount-damount;
    }
    else if (damount>wamount){
        cout<<"Deposited: "<<damount-wamount;
    }
    
    return 0;
}