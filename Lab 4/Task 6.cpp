#include<iostream>
using namespace std;

int main()
{
    int acc_balance,w_amount,remaining_balance;
    

    cout<<"Enter your account balance" << endl;
    cin >>acc_balance;
    cout<<"Enter the amount you want to widthdraw"<<endl;
    cin >>w_amount;
    
    if(w_amount<acc_balance)
    {
    remaining_balance=acc_balance-w_amount;
    cout<<"The remaining amount is "<<remaining_balance<<endl;
    }
    else
    cout<<"The Balance is Insufficient"<<endl;
    return 0;
}