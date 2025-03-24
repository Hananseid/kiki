#include <iostream>
#include <string>
#define taxRate1 0.15
using namespace std;

int main(){
    cout << "Hello everyone this is the program which analyzes the products sales and inventory for stores.\n";
    cout << "And feel free to use any word and numbers as describe since c++ this is compiled programing language.\n";
    cout << "THANK YOU!\n";
    //string productsName;
    int productCatagory;
    int initialInventory;
    float productPrice;
    int itemsSold;


    int NewInventory = (initialInventory - itemsSold);
    float TotalSales = (itemsSold * productPrice);

    //cout <<" Enter product Name: ";
    // cin >> productsName;
    cout << " Choose a product catagories 1 up to 5";
    cin >> productCatagory;
    cout << "The initial inventory quantity is: \n";
    cin >> initialInventory;
    cout <<"The price of the product is: \n ";
    cin >> productPrice;
    cout <<" The total number of items sold is: \n";
    cin >> itemsSold;   


    string inventoryStatus;
    inventoryStatus =
    if (NewInventory < 10)
        cout <<" Low Inventory";
    else
        cout <<" Sufficient Inventory";

    int directInitialization = 10;
    int assignInitialization; 
    assignInitialization = 20;
    int listInitialization{30};




   // auto helper = Totalsales;
   // decltype(initialInventory) helperr = 100;

    
   // const double taxRatee = 0.25;


    if (productCatagory < 1 || productCatagory> 5) {
        cout << "Invalid product catagory\n";
    }
    else {
        cout << "VALID\n";
    }
        switch (productCatagory) {
            case1:
            cout <<"catagory 1: Electronics\n";
            break;
            case2:
            cout<<"catagory 2: Grocery\n";
            break;
            case3:
            cout<< "catagory 3: clothing\n";
            break;
            case4:
            cout << "catagory 4: statinery\n";
            break;
            case5:
            cout <<"catagory 5: Miscellaneous\n";
            break;
              } 
            
    cout << "\nReceipt: \n";
    for (int n=1; n <= itemsSold; n++) {
        cout << "Item" << n << ": "  << productPrice << endl;
    }
        





    return 0;
}