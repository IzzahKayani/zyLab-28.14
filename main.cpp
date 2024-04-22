#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"

void PrintMenu() {
   //printmenu to do
   
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
   /* Type your code here */
   
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

   
   return 0;
}
