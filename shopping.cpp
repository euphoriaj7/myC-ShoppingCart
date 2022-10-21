#include <iostream>
#include "shopping.h"

using namespace std;
using namespace shopping;

    vector<string>shoppingList = {};
    vector<float>priceList = {};

void Shopping::addItem(){
    cout << "What item would you like to add? ";
    cin >> item;
    shoppingList.push_back(item);
    cout << "How much is the item? ";
    cin >> price;
    priceList.push_back(price);
    cout << item << " has been added to the cart.\n";
}

void shopping::removeItem(){

}