This project implements a simple supermarket system that allows users to add items to a cart and view the total price. The system is implemented in C++ and utilizes a command-line interface.

Features:

Display welcome message with the store name upon starting the program.
Display a list of available items with their respective item numbers and prices.
Allow users to add items to the cart by entering the item number.
Continuously display the contents of the cart and the total price.
Allow users to exit the program by entering '-1'.
Components:

Item struct: Represents a product with its name and price.
SuperMarketSystem class: Manages the supermarket operations.
Member Variables:
cart: Vector to store items in the cart.
Member Functions:
displayWelcomeMessage(): Displays the welcome message with the store name.
displayItems(): Displays the available items with their numbers and prices.
displayCart(): Displays the items in the cart and calculates the total price.
addToCart(): Adds a selected item to the cart based on the item number.
main() function: Initializes the supermarket system, displays items, and manages user input.
Usage:

Clone the repository or download the source code files.
Compile the code using a C++ compiler (e.g., g++, Visual C++, etc.).
Run the executable file generated after compilation.
Follow the prompts to interact with the supermarket system, add items to the cart, and view the total price.
To exit the program, enter '-1' when prompted for an item number.
