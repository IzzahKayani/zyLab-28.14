#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"
#include "ShoppingCart.cpp"

void PrintMenu()
{
   cout << "MENU "
		   "a - Add item to cart"
		   "d - Remove item from cart"
		   "c - Change item quantity"
		   "i - Output items' descriptions"
		   "o - Output shopping cart"
		   "q - Quit" << endl;
   
}

void ExecuteMenu(char option, ShoppingCart& theCart)
{
	if(option == 'o')
	{
		cout << "OUTPUT SHOPPING CART" << endl;
		cout << theCart.GetCustomerName(); << "'s  Shopping Cart - " << theCart.GetDate();
		cout << "Number of Items"
	}
   
}

int main()
{
   string name;
   string date;
   string option;
   bool repeat = true;


   cout << "Enter customer's name:" << endl;
   getline(cin, name);
   cout << "Enter today's date" << endl;
   getline(cin, date);
   cout << endl;

   cout << "Customer name: " << name << endl;
   cout << "Today's date: " << date << endl;

   ShoppingCart cart = new ShoppingCart(name, date);

   while(repeat)
   {
	   PrintMenu();
	   cout << "Choose an option: ";
	   cin >> option;

	   switch(option)
	   {
	   case 'a', 'd', 'c', 'i', 'o':
		   ExecuteMenu(option, cart);
	   case 'q':
		   repeat = false;
	   default:
		   cout << "incorrect input" << endl;
		   repeat = true;
	   }
   }


   
   return 0;
}
