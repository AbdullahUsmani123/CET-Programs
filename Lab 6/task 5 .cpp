#include <iostream>
using namespace std;
int main() {
    int catChoice, itemChoice, quantity;
    float totalPrice, discount, finalPrice;
    string itemName;
    
    float laptop =1000, smartphone = 700, headphones = 150;
    float jacket =120, tshirt = 40, jeans = 60;
    float milk = 2, bread = 3, eggs = 5;

    cout<<"Select a category:\n1. Electronics\n2. Clothing\n3. Groceries\n";
    cin>>catChoice;
    switch (catChoice) {
        case 1:
            cout<<"Select an item:\n1. Laptop (1000)\n2. Smartphone (700)\n3. Headphones (150)\n";
            cin>>itemChoice;
            cout<<"Enter quantity: ";
            cin>>quantity;
            
            switch (itemChoice) {
                case 1: totalPrice = laptop * quantity; itemName = "Laptop"; break;
                case 2: totalPrice = smartphone * quantity; itemName = "Smartphone"; break;
                case 3: totalPrice = headphones * quantity; itemName = "Headphones"; break;
                default: cout<<"Invalid item choice!"; 
            }
            break;
            
        case 2:
            cout<<"Select an item:\n1. Jacket (120)\n2. T-shirt (40)\n3. Jeans (60)\n";
            cin>>itemChoice;
            cout<<"Enter quantity: ";
            cin>>quantity;
            
            switch (itemChoice) {
            	
                case 1: totalPrice = jacket * quantity; itemName = "Jacket"; break;
                case 2: totalPrice = tshirt * quantity; itemName = "T-shirt"; break;
                case 3: totalPrice = jeans * quantity; itemName = "Jeans"; break;
                default: cout<<"Invalid item choice!";
            }
            break;
            
        case 3:
            cout<<"Select an item:\n1. Milk (2)\n2. Bread (3)\n3. Eggs (5)\n";
            cin>>itemChoice;
            cout<<"Enter quantity: ";
            cin >>quantity;
            
            switch (itemChoice) {
                case 1: totalPrice = milk * quantity; itemName = "Milk"; break;
                case 2: totalPrice = bread * quantity; itemName = "Bread"; break;
                case 3: totalPrice = eggs * quantity; itemName = "Eggs"; break;
                default: cout<<"Invalid item choice!"; 
            }
            break;
            
        default:
            cout<<"Invalid category choice!";
            
    }
    discount =0;
    if (totalPrice >= 100 && totalPrice <= 500) {
        discount = 0.10;
    } else if (totalPrice > 500) {
        discount = 0.20;
    }

    finalPrice = totalPrice - (totalPrice * discount);

    cout<< "\n  Invoice    " <<endl;
    cout<<"Item: "<< itemName<<endl;
    cout<< "Quantity: " << quantity << endl;
    cout<< "Total price: " << totalPrice << endl;
    cout<< "Discount: " << discount * 100 << "%" << endl;
    cout<< "Final amount: " << finalPrice << endl;

    return 0;
}
