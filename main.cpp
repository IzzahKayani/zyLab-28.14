#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"
#include "ShoppingCart.cpp"

void PrintMenu()
{

   cout << "MENU" << endl <<
		   "a - Add item to cart" << endl <<
		   "d - Remove item from cart" << endl <<
		   "c - Change item quantity" << endl << 
		   "i - Output items' descriptions" << endl <<
		   "o - Output shopping cart" << endl <<
		   "q - Quit" << endl;
   
}

void ExecuteMenu(char option, ShoppingCart& theCart)
{
	string itemName;
	int itemQuantity;

	if(option == 'o')
	{
		theCart.PrintTotal();
	}
	if(option == 'i')
	{
		theCart.PrintDescriptions();
	}
	if(option == 'a')
	{
		string itemDescription;
		int itemPrice;

		ItemToPurchase newItem;

		cout << "ADD ITEM TO CART" << endl;
		cout << "Enter the item name:" << endl;
		getline(cin, itemName);
		newItem.SetName(itemName);

		cout << "Enter the item description:" << endl;
		getline(cin, itemDescription);
		newItem.SetDescription(itemDescription);

		cout << "Enter the item price:" << endl;
		cin >> itemPrice;
		newItem.SetPrice(itemPrice);

		cout << "Enter the item quantity:" << endl;
		cin >> itemQuantity;
		newItem.SetQuantity(itemQuantity);

		theCart.AddItem(newItem);
	}
	if(option == 'd')
		{
			cout << "CHANGE ITEM QUANTITY" << endl;
			cout << "Enter name of item to remove:" << endl;
			getline(cin, itemName);

			theCart.RemoveItem(itemName);
		}
	if(option == 'c')
		{
			ItemToPurchase changeItem;

			cout << "CHANGE ITEM QUANTITY" << endl;
			cout << "Enter the item name:" << endl;
			getline(cin, itemName);
			changeItem.SetName(itemName);

			cout <<"Enter the new quantity:" << endl;
			cin >> itemQuantity;
			changeItem.SetQuantity(itemQuantity);

			theCart.ModifyItem(changeItem);
		}
}

int main()
{

   string custName;
   string currDate;
   char option;
   bool repeat = true;

   cout << "Enter customer's name:" << endl;
   getline(cin, custName);
   cout << "Enter today's date" << endl;
   getline(cin, currDate);
   cout << endl;

   cout << "Customer name: " << custName << endl;
   cout << "Today's date: " << currDate << endl;

   ShoppingCart cart;

   while(repeat)
   {
	   PrintMenu();
	   cout << "Choose an option: ";
	   cin >> option;

	   switch(option)
	   {
	   case 'a':
		   ExecuteMenu(option, cart);
	   case 'd':
		   ExecuteMenu(option, cart);
	   case 'c':
		   ExecuteMenu(option, cart);
	   case 'i':
		   ExecuteMenu(option, cart);
	   case 'o':
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
