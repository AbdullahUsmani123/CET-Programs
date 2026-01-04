#include <iostream>
using namespace std;
int main() {
    int num1, num2, choice;
    cout<<"Enter a number: "<<endl;
    cin>>num1;
    cout<<"Enter another number"<<endl;
    cin>>num2;
    cout<<"1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cout<<"Enter your choice: ";
    cin>>choice;

    switch (choice) {
        case 1:
           cout <<"Sum: "<<num1 + num2;
            break;
        case 2:
            cout<<"Subtraction: "<<num1 - num2;
            break;
        case 3:
            cout<<"Product: "<<num1 * num2;
            break;
        case 4:
            if (num2 != 0)
                cout<<"Quotient: "<<(float) num1 / num2;
            else
                cout<<"Error";
            break;
        }
   return 0;
   }
