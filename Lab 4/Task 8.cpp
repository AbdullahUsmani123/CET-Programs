#include<iostream>
using namespace std;

int main()
{
    int basic_salary,service,gross_salary,net_salary,bonus;
    cout<<"Enter the Basic salary"<<endl;
    cin>>basic_salary;
    cout<<"Enter the years of service"<<endl;
    cin>>service;
    
    if(service>=10){
     bonus=basic_salary*0.10;
    }
    if(service>=5&&service<=9){
    bonus=basic_salary*0.05;
    }
    if(service<5){
    bonus=basic_salary*0;
    }
    
    gross_salary=bonus+basic_salary;
    
    if(gross_salary>40000){
    net_salary=gross_salary-(gross_salary*0.20);
    }
    
    if(gross_salary>=30000&&gross_salary<=40000){
    net_salary=gross_salary-(gross_salary*0.10);
    }
    
    if(gross_salary<30000){
    net_salary=gross_salary-0;
    
    }
    
    cout<<net_salary<<endl;
    
    
    
    
    
    return 0;
}