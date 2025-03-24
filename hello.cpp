#include <iostream>
#include <string>
using namespace std;
int main(){
    // product massege
    cout << " The purpose of this program is to analyzes the product sales and inventory for a store.\n And for your remind  c++ is acompiled language it compiles high level language in to machine language\n THANK YOU!\n";
    string Name;
    // product detail
    int catagory;
    int inventory;
    float price;
    int sold;
    //computed values
    int Newiventory;
    Newiventory = inventory - sold;
    float sales;
    sales = sold*price;
    string status;

    if (Newiventory <10){
        cout << status <<"is low inventory"<< endl;}
    else {
        cout << status << "is sufficient" << endl ;}
        //auto
       //decltype 
#define Taxrate 0.15;
//const float Taxrate = 0.15f;
cout << "ENTER THE PRODUCT YOU WANT: ";
cin >> Name;
cout <<" ENTER THE PRODUCT CATAGORY YOU CHOOSE.(1-5): ";
cin >> catagory;
cout << "ENTER THE INTIAL INVRNTORY QUALITY: ";
cin >> inventory;
cout << "ENTER THE PRICE OF THE PRODUCT: ";
cin >> price;
cout << "ENTER THE NUMBER OF ITEMS SOLD: ";
cin >> sold;





    

 




    return 0;
}