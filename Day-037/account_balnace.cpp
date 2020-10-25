/**
    problem statement: Nikhil would like to withdraw X amount from an atm . the cash machine only accept the transaction if X is multiple of 5, for each successful
    withdrawl the bank charges 0.50.calculate nikhil account balance after an attempted transaction.
    input : 30 120.00
    output : 89.50
*/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int withdraw;
    float balance;

    cout << "Enter Withdrawl amount  ";
    cin >> withdraw;

    cout << "Enter account balance ";
    cin >> balance;

    if(balance > withdraw)
       if(!(withdraw % 5))
            balance = balance -  withdraw - 0.50;

    cout << fixed << setprecision(2) << balance;
}
