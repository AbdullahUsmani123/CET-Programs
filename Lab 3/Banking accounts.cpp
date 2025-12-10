#include <iostream>
using namespace std;

int main() {
    int balance, loyal;

    cout << "Enter account balance: ";
    cin >> balance;

    cout << "Enter loyalty status (1 = loyal, 0 = not loyal): ";
    cin >> loyal;
    string accountType =(balance < 100) ? "Low Balance Account" :(balance <= 500) ? "Standard Account" :"Premium Account";

    string specialOffer =(balance > 200 && loyal == 1) ? "Eligible" : "Not Eligible";

    cout << "Account Type: " << accountType << endl;
    
    
    cout << "Special Offer: " << specialOffer << endl;

    return 0;
}
