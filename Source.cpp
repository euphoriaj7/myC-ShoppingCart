#include<iostream>
#include<list>
using namespace std;

int main()
{
    // print("Welcome to the Shopping Cart Program!")
    // <summary>
	// cout stands for c++out statement 
	// </summary>
	// <returns></returns>
    cout << "Welcome to the Shopping Cart Program!" << endl;

       // shopping_list = []
        list<string>shoppingList = {};

       // price_list = []
        list<float>priceList = {};

       // choice = 0
        float choice = 0;

        //total = 0
        float total = 0;

        //cont = True
        bool cont = true;


        //while cont == True:
        while (cont == true) {

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
            cout << "Please select one of the following: ";
            cin >> choice;
            //if choice == '1':
            if (choice == 1) {
                string item;
                float price;
                cout << "What item would you like to add? ";
                cin >> item;
                shoppingList.push_back(item);
                cout << "How much is the item? ";
                cin >> price;
                priceList.push_back(price);
                cout << item << " has been added to the cart.\n";
                //item = input('What item would you like to add? ')
                //price = float(input('How much is the item? '))
                //shopping_list.append(item)
                //price_list.append(price)
                //print(f"'{item}' has been added to the cart.")
                //print()
            }
            // if choice == '2':
                //n = 0
            //  print("The contents of the shopping cart are:")
                //for items in shopping_list :
                    //print(f"{n+1} {shopping_list[n]} ${price_list[n]:.2f}")
                    //  n += 1
                    //print()
            //if choice == '3' :
                //  remove = int(input("Which item would you like to remove? ")) - 1
                //shopping_list.pop(remove)
                // price_list.pop(remove)
                //print("Item removed.")
            //if choice == '4' :
                //  for items in price_list :
                    //total += items
                    //  print(f"${total:.2f}")
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
            return 0;
        }  return 0;
}