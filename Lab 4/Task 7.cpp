#include<iostream>
using namespace std;
int main()
{
 int salary,w_exp;
    cout<<"Enter your Salary"<<endl;
    cin>>salary;
    cout<<"Enter your years of work experience"<<endl;
    cin>>w_exp;
    
    if(w_exp>5){
    cout<<"You are eligible for Loan"<<endl;
    }
    else
    
    if(salary>=25000){
    cout<<"You are eligible for Loan"<<endl;
    }
    else{
    cout<<"You are not eligible for Loan"<<endl;
    }
    
    return 0;
}