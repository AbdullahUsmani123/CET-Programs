#include <iostream>
using namespace std;
int main() {
    int choice;
    float radius, length, width, base, height;
      cout<<"1. Circle "<<endl
          <<"2. Rectangle"<<endl
          <<"3. Triangle"<<endl;
          
    cout<<"Enter your choice: ";
    cin>>choice;

    switch (choice) {
        case 1:
           cout<<"Enter radius: ";
          cin>>radius;
          cout<<"Area: "<< 3.14 * radius * radius;
           break;
           
        case 2:
          cout<<"Enter the length : "<<endl;
          cin>>length;
          cout<<"Enter the width"<<endl;
          cin>>width;
         cout<<"Area: "<<length * width;
           break;
           
        case 3:
          cout<<"Enter the base : "<<endl;
          cin>>base;
          cout<<"Enter the Height :"<<endl;
          cin>>height;
         cout<<"Area: "<<0.5 * base * height;
          break;
          
      default:
          cout<<"Invalid choice";
    }
    return 0;
}
