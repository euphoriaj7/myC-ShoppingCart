#include<iostream>
#include<list>
#include<vector>
#include"shopping.h"

using namespace std;
using namespace shopping;

vector<string>shoppingList = {};

vector<float>priceList = {};

int main()
{
    Shopping shopping;
    // print("Welcome to the Shopping Cart Program!")
    // <summary>
	// cout stands for c++out statement 
	// </summary>
	// <returns></returns>
    cout << "Welcome to the Shopping Cart Program!" << endl;


    // vector<string>shoppingList = {};

    // vector<float>priceList = {};

       // choice = 0
        float choice = 0;

        //total = 0
        float total = 0;

        //cont = True
        bool cont = true;

        //while cont == True:
        while (cont == true) {
            cout << endl;

            // print('1. Add item')
            cout << "1. Add item" << endl;

            //   print('2. View cart')
            cout << "2. View cart" << endl;

            // print('3. Remove item')
            cout << "3. Remove item" << endl;

            //print('4.compute total')
            cout << "4. compute total" << endl;

            //print('5. Quit')
            cout << "5. Quit" << endl;

            //choice = input("Please select one of the following: ")
            int choice;
            string item;
            cout << "Please select one of the following: ";
            cin >> choice;
            //if choice == '1':
            //item = input('What item would you like to add? ')
                //price = float(input('How much is the item? '))
                //shopping_list.append(item)
                //price_list.append(price)
                //print(f"'{item}' has been added to the cart.")
                //print()        
            if (choice == 1) {
                shopping.addItem();
                shoppingList.push_back(shopping.item);
                cout << "How much is the item? ";
                cin >> shopping.price;
                priceList.push_back(shopping.price);
                cout << item << " has been added to the cart.\n";
            }
            // if choice == '2':
            //n = 0
            //  print("The contents of the shopping cart are:")
                //for items in shopping_list :
                    //print(f"{n+1} {shopping_list[n]} ${price_list[n]:.2f}")
                    //  n += 1
                    //print()
            if (choice == 2) {
                int myIndex = 0;
                cout << "The contents of the shopping cart are: \n ";
                cout << " \n ";
                for(string item : shoppingList) {
                    cout << (myIndex + 1)<<"." << " " << shoppingList[myIndex] << " $" << priceList[myIndex] << "\n";
                    myIndex++;
                    cout << " ";
                }
            }
             
            //if choice == '3' :
                //  remove = int(input("Which item would you like to remove? ")) - 1
                //shopping_list.pop(remove)
                // price_list.pop(remove)
                //print("Item removed.")
            if (choice == 3) {
                if(shoppingList.size() > 0){
                    int remove;
                    //auto elem_to_remove = shoppingList.begin();
                    cout << "Which item would you like to remove? (Please put in the number that corresponds with the item you wish to remove) \n";
                    cin >> remove;
                    //remove = (remove - 1);
                    ////if (elem_to_remove != shoppingList.end()) {
                    shoppingList.erase(shoppingList.begin() + (remove-1));
                    priceList.erase(priceList.begin() + (remove-1));
                    //}
                    cout << "Item removed. \n ";
                }
                
            }
            //if choice == '4' :
                //  for items in price_list :
                    //total += items
                    //  print(f"${total:.2f}")
            if (choice == 4) {
                float total = 0.0;
                for (float items : priceList) {
                    total += items;
                }
                if(total == total){
                    cout << " Your Cart's Total is $ " << total << "\n";
                }
            }
            //if choice == '5' :
                //  verify = input('Are you sure?(put "y" for yes and "n" for no) ')
                //if verify == "y" :
                    //  print('Thank you for shopping. Goodbye.')
                    //print('')
                    //cont = False
                //elif verify == "n" :
                    //print("Please make sure you are ready next time!")
                //else:
                    // print('I dont know what you mean!??! Please answer y or n next time \n;)\n:P ')
            if (choice == 5) {
                string verify = "";
                cout << "Are you sure? \n (put 'y' for yes and 'n' for no)" << "\n";
                cin >> verify;
                if (verify == "y") {
                    cout << "Thank you for shopping. Goodbye. \n";
                    cout << " \n";
                    cont = false;
                    return 0;
                }
                else if (verify == "n") {
                    cout << "Plesae make sure you are ready to to quit next time. \n";
                }
                else if (verify != "n" or verify != "y") {
                    cout << "I dont know what you mean!??! Please answer 'y' or 'n' next time \n ;) \n";
                }
                else{
                cout << "Please select only one of the five options! \n";
            }
        }  
    }
}