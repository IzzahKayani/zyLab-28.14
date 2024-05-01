#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"


//https://github.com/IzzahKayani/zyLab-28.14.git

void PrintMenu()
{

   cout << "MENU" << endl <<
		   "a - Add item to cart" << endl <<
		   "d - Remove item from cart" << endl <<
		   "c - Change item quantity" << endl << 
		   "i - Output items' descriptions" << endl <<
		   "o - Output shopping cart" << endl <<
		   "q - Quit" << endl;
		   cout << endl;
   
}

void ExecuteMenu(char option, ShoppingCart& theCart)
{
	string itemName;
	int itemQuantity;

	if(option == 'o')
	{
	   cout << "OUTPUT SHOPPING CART" << endl;
	   cout << theCart.GetCustomerName() << "'s Shopping Cart - " << theCart.GetDate() << endl;
		theCart.PrintTotal();
		cin.ignore();
	}
	if(option == 'i')
	{
	   cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
	   cout << theCart.GetCustomerName() << "'s Shopping Cart - " << theCart.GetDate() << endl;
		theCart.PrintDescriptions();
	}
	if(option == 'a')

	{
		string itemDescription;
		int itemPrice;

		cout << "ADD ITEM TO CART" << endl;
		cout << "Enter the item name:" << endl;
		getline(cin, itemName);

		cout << "Enter the item description:" << endl;
		getline(cin, itemDescription);

		cout << "Enter the item price:" << endl;
		cin >> itemPrice;

		cout << "Enter the item quantity:" << endl;
		cin >> itemQuantity;

      cout << endl;
      ItemToPurchase newItem(itemName, itemDescription, itemPrice, itemQuantity);
		theCart.AddItem(newItem);

	}
	if(option == 'd')
		{
			cout << "REMOVE ITEM FROM CART" << endl;
			cout << "Enter name of item to remove:" << endl;
			getline(cin, itemName);;

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
   cout << "Enter today's date:" << endl;
   getline(cin, currDate);
   cout << endl;

   cout << "Customer name: " << custName << endl;
   cout << "Today's date: " << currDate << endl;
   cout << endl;

   ShoppingCart cart(custName, currDate);

   PrintMenu();

   while(repeat)
   {
      if(option == 'a' || option == 'd' || option == 'c' || option == 'i' || option == 'o')
      {
         PrintMenu();
      }

	   cout << "Choose an option:" << endl;
	   cin >> option;

      if(option == 'a' || option == 'd' || option == 'c' || option == 'i' || option == 'o')
      {
         ExecuteMenu(option, cart);
      }
      else if(option == 'q')
      {
         repeat = false;
      }
      else
      {
         repeat = true;
      }
   }
   
   return 0;
}
