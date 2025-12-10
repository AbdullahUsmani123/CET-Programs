#include<iostream>
using namespace std;
int main()
 { 
    int age,income;
      
    cout<<"Enter Your Age: "<<endl;
    cin>>age;
    cout<<"Enter Your Income"<<endl;
    cin>>income;
    
    if(age<18){
    cout<<"You do not meet the age requirement for the Loan"<<endl;
    }
    else if (income<30000){
    cout<<"You meet the age requirement but do not meet the Income requirement"<<endl;
    }
    else{
    cout<<"You are eligible for the Loan"<<endl;}
    return 0;
 }