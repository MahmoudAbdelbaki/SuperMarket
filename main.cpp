#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <cstdlib> // For system("cls") on Windows or system("clear") on Unix/Linux

#ifdef _WIN32
#define CLEAR_SCREEN "cls"
#else
#define CLEAR_SCREEN "clear"
#endif

// Item struct representing a product with its name and price
struct Item
{
    std::string name;
    double price;
};

// SuperMarketSystem class to manage the supermarket operations
class SuperMarketSystem
{
private:
    std::vector<Item> cart; // Vector to store items in the cart
    double discount;
                                            

public:
    SuperMarketSystem() : discount(0) {} // Constructor to initialize discount
    // Display welcome message with the store name
    void displayWelcomeMessage() const
    {
        std::cout << " _   _                           _   _                           _   \n"
                     "| | | |                         | | | |                         | |  \n"
                     "| |_| | __ _ _ __  _ __  _   _  | |_| | __ _ _ ____   _____  ___| |_ \n"
                     "|  _  |/ _` | '_ \\| '_ \\| | | | |  _  |/ _` | '__\\ \\ / / _ \\/ __| __|\n"
                     "| | | | (_| | |_) | |_) | |_| | | | | | (_| | |   \\ V /  __/\\__ \\ |_ \n"
                     "\\_| |_/\\__,_| .__/| .__/ \\__, | \\_| |_|\\__,_|_|    \\_/ \\___||___/\\__|\n"
                     "            | |   | |     __/ |                                       \n"
                     "            |_|   |_|    |___/                                        " << std::endl;
        std::cout << "Welcome To The Store\n";
    }

    // Display items available in the store with their respective item numbers and prices
    void displayItems(const std::unordered_map<int, Item>& items)
    {
        std::cout << "Here Is The List Of Items\n";
        int tag = 1; // the number of the item
        for (const auto& item : items)
        {
            std::cout << tag << " _ " << item.second.name << "_" << item.second.price << " $" << std::endl;
            tag++;
        }
        std::cout << "=========================\n";
    }

    // Display items in the cart along with their prices and calculate the total price
    void displayCart()
    {
        std::cout << "Items in the cart\n";
        double total = 0.0;
        for (const auto& item : cart)
        {
            std::cout << "_" << item.name << "_" << item.price << " $\n";
            total += item.price;
        }
        std::cout << "Total = " << total << " $" << std::endl;
        
    }

    // Add selected item to the cart based on item number
    void addToCart(const std::unordered_map<int, Item>& items, int itemTag)
    {
        auto it = items.find(itemTag);
        if (it != items.end())
        {
            cart.push_back(it->second);
        }
    }
};

int main()
{
    SuperMarketSystem super;
    std::unordered_map<int, Item> items = {
    {1, {"Apple", 1.99}},
    {2, {"Banana", 0.49}},
    {3, {"Milk", 2.29}},
    {4, {"Bread", 1.89}},
    {5, {"Eggs", 2.99}},
    {6, {"Cheese", 3.49}},
    {7, {"Chicken", 5.99}},
    {8, {"Rice", 4.29}},
    {9, {"Tomato", 0.79}},
    {10, {"Potato", 0.59}}
    // Add more items as needed
};

    int choice;
    while (true)
    {
        super.displayWelcomeMessage();
        super.displayItems(items);
        super.displayCart(); // Display cart after welcome message and item list
        std::cout << "Enter the item number to add to cart (or -1 to exit): ";
        std::cin >> choice;
        if (choice == -1){
            break;
        }
        system(CLEAR_SCREEN);
        super.addToCart(items, choice);
    
    }

    return 0;
}
