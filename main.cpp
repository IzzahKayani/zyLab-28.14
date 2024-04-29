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
	string itemName;
	int itemQuantity;

	if(option == 'o')
	{
		theCart.PrintTotal();
	}
	if(option == 'i')
	{
		theCart.PrintDescription();
	}
	if(option == 'a')
	{
		string itemDescription;
		int itemPrice;
		ItemToPurchace newItem = new ItemToPurchace();

		cout << "ADD ITEM TO CART" << endl;
		cout << "Enter the item name:" << endl;
		getline(cin, itemName);
		newItem.SetName(itemName);

		cout << "Enter the item description:" << endl;
		getline(cin, itemDescription);
		newItem.SetDescription(itemDescription);

		cout << "Enter the item price:" << endl;
		cin >> itemPrice;
		newItem.SetPrice(itemPrice;

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
	if(output == 'c')
		{
			cout << "CHANGE ITEM QUANTITY" << endl;
			cout << "Enter the item name:" << endl;
			getline(cin, itemName);
			cout <<"Enter the new quantity:" << endl;
			cin >> itemQuantity;

			for(int i = 0; i < theCart.GetNumItemsInCart(); i++)
			{
				if(theCart.)
			}


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
