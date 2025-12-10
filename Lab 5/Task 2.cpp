#include<iostream>
using namespace std;

int main()
{
    int temp;
    cout<<"Enter The Temperature"<<endl;
    cin>>temp;
    
    if(temp>=40){
    cout<<"You should stay inside and play indoor games because it is extremely hot outside and could be dangerous to the health"<<endl;
    }
    else if(temp>=30&&temp<=39){
    cout<<"You should drink plenty of water to stay hydrated in hot weather"<<endl;
    }
    
    else if(temp>=20&&temp<=29){
    cout<<"The weather is pleasant and suitable for outdoor activities"<<endl;
    }
    else
    cout<<"You should wear warm clothes to stay warm in cooler weather"<<endl;
    return 0;
}