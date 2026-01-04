#include <iostream>
using namespace std;
int main() {
    int choice;
    float amount, convertedAmount;
    float usdToPkr = 278.5;
    float usdToInr = 83.0;
    float usdToEuros = 0.93;

    cout<<"Currency Converter (USD to):\n";
    cout<<"1. Pakistani Rupee (PKR)\n";
    cout<<"2. Indian Rupee (INR)\n";
    cout<<"3. Euros\n";
    cout<<"Enter your choice: ";
    cin>>choice;
    cout<<"Enter amount in USD: ";
    cin>>amount;
    
    switch (choice) {
        case 1:
           convertedAmount = amount * usdToPkr;
           cout<<amount<<" USD= "<<convertedAmount<<" PKR";
         break;
         
        case 2:
            convertedAmount = amount * usdToInr;
            cout<<amount<<" USD = "<<convertedAmount<<" INR";
          break;
          
        case 3:
            convertedAmount=amount * usdToEuros;
            cout<<amount<< " USD = " <<convertedAmount<<" Euros";
            break;
            
        default:
         cout<<"Invalid choice!";
    }
    return 0;
}
