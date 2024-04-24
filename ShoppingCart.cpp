#include <iostream>
#include "ShoppingCart.h"
using namespace std;

ShoppingCart::ShoppingCart(){
    customerName = "none";
    currentDate = "January 1, 2016";
}
ShoppingCart::ShoppingCart(string name, string date){
    customerName = name;
    currentDate = date;
}
      
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
        ItemToPurchase currItem = cartItem.at(i);
        if(currItem.GetName() == item.GetName()){
            if((currItem.GetDescription() != "none") && (currItem.GetPrice() != 0) && (currItem.GetQuantity() != 0)){
                currItem.SetDescription(item.GetDescription());
                currItem.SetPrice(item.GetPrice());
                currItem.SetQuantity(item.GetQuantity());
            }
            break;
        }
        else if(i == cartItem.size() - 1){
            cout << "Item not found in cart. Nothing modified." << endl;
        }
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
    int numItems = 0;
    int costItems = 0; 
    int totalItems = 0;

    for(int i = 0; i < cartItems.size(); i++){

        numItems = cartItems.at(i).GetQuantity();
        costItems = cartItems.at(i).GetPrice();

        totalItems += (numItems * costItems);
    }
    return static_cast<double>(totalItems);
}
      
void ShoppingCart::PrintTotal(){
    cout << 
}
void ShoppingCart::PrintDescriptions(){

}
      
   
   private:
      string customerName;
      string currentDate;
      vector<ItemToPurchase> cartItems;