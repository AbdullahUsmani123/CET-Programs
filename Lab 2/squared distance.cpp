#include<iostream>
using namespace std;

int main()
{
    int x1,x2,y1,y2,squared_distance;
    x1=3;
    x2=6;
    y1=4;
    y2=8;
   squared_distance=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    cout<<"squared distance between points (3,4) and (6,8) is:"<<squared_distance<< endl;
    
    return 0;
}