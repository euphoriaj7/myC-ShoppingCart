#include<iostream>
#include<list>

int main()
{
	/// <summary>
	/// cout stands for c++out statement 
	/// </summary>
	/// <returns></returns>
	std::cout << "Welcom to the Shopping Cart Program!" << std::endl;

    // print("Welcome to the Shopping Cart Program!")
    // <summary>
	// cout stands for c++out statement 
	// </summary>
	// <returns></returns>
	std::cout << "Welcom to the Shopping Cart Program!" << std::endl;

       // shopping_list = []
        std::list<std::string>shoppingList = {};

       // price_list = []
        std::list<float>priceList = {};

       // choice = 0
        float choice = 0;

        //total = 0
        float total = 0;

        //cont = True
        bool cont = true;


        //while cont == True:
        while (cont == true) {
            
            // print('1. Add item')
            std::cout << "1. Add item" << std::endl;

            //   print('2. View cart')
            std::cout << "1. View cart" << std::endl;

            // print('3. Remove item')
            std::cout << "1. Remove item" << std::endl;

            //print('4.compute total')
            std::cout << "1. compute total" << std::endl;

            //print('5. Quit')
            std::cout << "1. Quit" << std::endl;

            //choice = input("Please select one of the following: ")
            //if choice == '1':
                //item = input('What item would you like to add? ')
                //price = float(input('How much is the item? '))
                //shopping_list.append(item)
                //price_list.append(price)
                //print(f"'{item}' has been added to the cart.")
                //print()
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

        }     
}