#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main()
{

    string itemName;
    double itemPrice;
    int numItems;
    char gift;
    string occasion;

    cout << "Please enter the name of the item: ";
    getline (cin,itemName);

    cout << "Please enter the price for each item: ";
    cin >> itemPrice;
    

    cout << "Please enter the quantity: ";
    cin >> numItems;

    cout << "Is this a gift? ";
    cin >> gift;

    cout << "Please enter the description of the occasion: ";
    cin >> occasion;

    cout << "========== RECEIPT ==========\n";
    cout << "Name:       " + itemName + "\n";

    cout << "Price:      $" << itemPrice << "\n";

    cout << fixed;
    cout << setprecision(2);

    cout << "Quantity:   " << numItems << "\n";

    cout << "Subtotal:   $" << numItems * itemPrice << "\n";

    cout << "Tax:        $" << (numItems * itemPrice)/10 << "\n";

    cout << "Total:      $" << (numItems * itemPrice)/10 + numItems * itemPrice << "\n";

    cout << "Gift (y/n): " << gift << "\n";

    cout << "Occasion:   " + occasion + "\n";




return 0;
}