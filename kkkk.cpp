#include <iostream>
#include <string>
#define taxRate1 0.15
using namespace std;

int main() {
    cout << "Hello everyone this is the program which analyzes the products sales and inventory for stores ;
    cout << "And feel free to use any word and numbers as describe since c++ is compiled programing language.\n";
    cout << "THANK YOU!\n";

    string productname;
    int productcatagory;
    int initialinventory;
    float productprice;
    int itemssold;
    
    cout << "Enter product Name: ";
    cin >> productname;
    cout << "Choose a product catagories 1 up to 5: ";
    cin >> productcatagory;
    cout << "The initial inventory quantity is: ";
    cin >> initialinventory;
    cout << "The price of the product is: ";
    cin >> productprice;
    cout << "The total number of items sold is: ";
    cin >> itemssold;

    int newinventory = (initialinventory - itemssold);
    float totalsales = (itemssold * productprice);
    string inventorystatus = (newinventory<10)? "Low Inventory" : "Sufficient Inventory";

    
    int directinit = 10;
    int assigninit; 
    assigninit = 20;
    int listinit{30};
   
    
    
    auto helper1 = totalsales;
    decltype(initialinventory) helper2 = 100;
    const float taxRate2 = 0.25;

     

    if (productcatagory < 1 || productcatagory > 5) {
        cout << "Invalid product catagory\n";
    }
    else {
        switch (productcatagory) {
            case 1:
                cout << "catagory 1: Electronics\n";
                break;
            case 2:
                cout << "catagory 2: Grocery\n";
                break;
            case 3:
                cout << "catagory 3: clothing\n";
                break;
            case 4:
                cout << "catagory 4: statinery\n";
                break;
            case 5:
                cout << "catagory 5: Miscellaneous\n";
                break;
        }
                   } 
    }

    cout << "    Receipt: \n";
    for (int n = 1; n <= itemssold; n++) {
        cout << "Item" << n << ": " << productprice << endl;
    }

    cout << "    tax rates:\n";
    cout << "preprocessor tax rate : " << taxRate1 << endl;
    cout << "const tax rate: " << taxRate2 << endl;
    cout << "    Product summary :\n";
    cout << "Product Name: " << productname << endl;
    cout << "product catagory: " << productcatagory << endl;
    cout << "initial inventory : " << initialinventory << endl;
    cout << "price: " << productprice << endl;
    cout << "Item sold: " << itemssold << endl;
    cout << "New inventory: " << newinventory << endl;
    cout << "Total sale: " << totalsales << endl;
    cout << "Inventory status: " << inventorystatus << endl;  
    cout << "auto helper: " << helper1 << endl;
    cout << "decl helper: " << helper2 << endl;

    return 0;
}