#include <iostream>
#include "shopping.h"
#include <list>

using namespace std;
using namespace shopping;

// constexpr static list<string>shoppingList = {};
// constexpr static list<float>priceList = {};

Shopping::Shopping()
: item("") {};


void Shopping::addItem(){
    cout << "What item would you like to add? ";
    cin >> item;
    // shoppingList.push_back(item);
    // cout << "How much is the item? ";
    // cin >> price;
    // priceList.push_back(price);
    // cout << item << " has been added to the cart.\n";
}

// void Shopping::removeItem(){

// }
