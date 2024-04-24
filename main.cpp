#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"

void PrintMenu()
{
   cout << "MENU "
		   "a - Add item to cart"
		   "d - Remove item from cart"
		   "c - Change item quantity"
		   "i - Output items descriptions"
		   "o - Output shopping cart"
		   "q - Quit" << endl;
   
}

void ExecuteMenu(char option, ShoppingCart& theCart)
{

   
}

int main() {
   string name;
   string date;


   cout << "Enter customer's name:" << endl;
   getline(cin, name);
   cout << "Enter today's date" << endl;
   getline(cin, date);
   cout << endl;

   cout << "Customer name: " << name << endl;
   cout << "Today's date: " << date << endl;

   ShoppingCart item = new ShoppingCart(name, date);

   PrintMenu();


   
   return 0;
}
