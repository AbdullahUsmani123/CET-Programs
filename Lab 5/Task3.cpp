#include<iostream>
using namespace std;
int main()
{
    string username="admin",password="12345",user_name,pass;
    cout<<"Enter your Username : "<<endl;
    cin>>user_name;
    cout<<"Enter the Password"<<endl;
    cin>>pass;
    
    if(user_name==username&&pass==password){
    cout<<"Access Granted"<<endl;}
    
    else if (user_name==username&&pass!=password){
    cout<<"Wrong Password"<<endl;}
    else{
    cout<<"Username Not Found"<<endl;
    }
    return 0;
}