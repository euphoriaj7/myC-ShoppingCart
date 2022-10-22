#include <iostream>
using namespace std;
#include <vector>

namespace shopping {
    class Shopping {
        // private:
        public:
        vector<string>shoppingList;
        vector<float>priceList;
        string item;
        float price;
        Shopping();
        void addItem();
        void removeItem();
    };
}