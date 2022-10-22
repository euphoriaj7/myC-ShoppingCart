#include <iostream>
#include "tax.h"

using namespace std;
using namespace tax;

// constexpr static list<string>shoppingList = {};
// constexpr static list<float>priceList = {};

Tax::Tax()
: customerTax(0.0) {};


float Tax::findTax(){
    cout << "What is the sales tax for your state? ";
    cin >> enteredTax;
    customerTax = enteredTax / 100;
    return customerTax;

    // shoppingList.push_back(item);
    // cout << "How much is the item? ";
    // cin >> price;
    // priceList.push_back(price);
    // cout << item << " has been added to the cart.\n";
}

// void Shopping::removeItem(){

// }
