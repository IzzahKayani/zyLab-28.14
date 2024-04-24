#include <iostream>
#include "ShoppingCart.h"
using namespace std;

ShoppingCart::ShoppingCart();
ShoppingCart::ShoppingCart(string name, string date)
      
string ShoppingCart::GetCustomerName() const{return customerName; }

string ShoppingCart::GetDate() const{ return currentDate; }
      
void ShoppingCart::AddItem(ItemToPurchase item){
    cartItems.push_back(item);
}
void ShoppingCart::RemoveItem(string name){
    for(int i = 0; i < cartItems.size(); i++){
        if(cartItems.at(i).GetName() == name){
            cartItems.erase(cartItems.begin() + i);
            break;
        }
        else if(i == cartItems.size() - 1){
            cout << "Item not found in cart. Nothing removed." << endl;
        }
    }
}
      
void ShoppingCart::ModifyItem(ItemToPurchase item){
    for(int i = 0; i < cartItem.size(); i++){
        if(cartItem.at(i).GetName() == item.GetName())
    }
}
      
int ShoppingCart::GetNumItemsInCart(){
    int numItems = 0;
    for(int i = 0; i < cartItems.size(); i++){

        numItems += cartItems.at(i).GetQuantity();
    }
    return numItems;
}
double ShoppingCart::GetCostOfCart(){

}
      
void ShoppingCart::PrintTotal(){

}
void ShoppingCart::PrintDescriptions(){

}
      
   
   private:
      string customerName;
      string currentDate;
      vector<ItemToPurchase> cartItems;