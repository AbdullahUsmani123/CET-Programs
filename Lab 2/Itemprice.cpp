#include<iostream>
using namespace std;
int main()
{
 float item1,item2,item3,item4,item5,sub_total,sales_tax,total;
 item1=12.95;
 item2=24.95;
 item3=6.95;
 item4=14.95;
 item5=3.95;
 sub_total=item1+item2+item3+item4+item5;
 sales_tax=sub_total*6/100;
 total=sales_tax+sub_total;
 cout<<"Price of Item 1:$ "<<item1<<endl<<"Price of Item 2:$ "<<item2<<endl<<"Price of Item 3:$ "<<item3<<endl<<"Price of Item 4:$ "<<item4<<endl<<"Price of Item 5:$ "<<item5<<endl; 
 cout<<"SubTotal:$ "<<sub_total<<endl;
 cout<<"Sales tax(6%):$ "<<sales_tax<<endl;
 cout<<"Total:$"<<total; 

    return 0;
}