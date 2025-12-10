#include<iostream>
using namespace std;

int main()
{
int a,b,c,greatest;
    cout<<"Enter the first number=  "<< endl;
    cin>>a;
    cout<<"Enter the second number= "<<endl;
    cin>>b;
    cout<<"Enter the third number= "<<endl;
    cin>>c;
    
    greatest=a;
             
    if(b>greatest)
    greatest=b;
    if(c>greatest)
    greatest=c;
    
    cout<<"The greatest number is "<<greatest<<endl;
    return 0;
}