#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout<<"Enter the Marks"<<endl;
    cin>>marks;
    
    if(marks>=90)
    cout<<"Grade A+ "<<endl;
    if(marks>=80&&marks<=89)
    cout<<"Grade A "<<endl;
    if(marks>=70&&marks<=79)
    cout<<"Grade B "<<endl;
    if(marks>=60&&marks<=69)
    cout<<"Grade C "<<endl;
    if(marks<60)
    cout<<"You have failed"<<endl;
    
    return 0;
}