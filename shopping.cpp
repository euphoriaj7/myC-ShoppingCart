#include <iostream>
#include "shopping.h"
#include <vector>

using namespace std;
using namespace shopping;

Shopping::Shopping()
: vector<string>shoppingList, vector<float>priceList, string item, float price {};


void Shopping::addItem(){
    cout << "What item would you like to add? ";
    cin >> Shopping::item;
    shoppingList.push_back(Shopping::item);
    cout << "How much is the item? ";
    cin >> Shopping::price;
    priceList.push_back(Shopping::price);
    cout << Shopping::item << " has been added to the cart.\n";
}

// void shopping::removeItem(){

// }