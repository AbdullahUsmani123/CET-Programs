#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
float score1,score2,score3,avg;
score1=85.5;
score2=90.75;
score3=88.25;
avg=(score1+score2+score3)/3;
cout<<"The average of " <<score1<<" , "<<score2<<" , "<<score3<<" is= "<<setprecision(4)<<avg;  



 return 0;
}