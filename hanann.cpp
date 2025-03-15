#include <iostream>
#include <string>
#define taxRate1 0.15
using namespace std;

int main(){
    cout << "Hello everyone this is the program which analyzes the products sales and inventory for stores.\n";
    cout << "And feel free to use any word and numbers as describe since c++ this is compiled programing language.\n";
    cout << "THANK YOU!\n";


    string productname;
    int productcatagory;
    int initialinventory;
    float productprice;
    int itemssold;

    cout <<" Enter product Name: ";
    cin >> productname;
    cout << " Choose a product catagories 1 up to 5";
    cin >> productcatagory;
    cout << "The initial inventory quantity is: ";
    cin >> initialinventory;
    cout <<"The price of the product is: ";
    cin >> productprice;
    cout <<" The total number of items sold is: ";
    cin >> itemssold;

    int newinventory = (initialinventory - itemssold);
    float totalsales = (itemssold * productprice);
    
    auto helper1 = totalSales;
    decltype(initialInventory) helper2 = 100;
    const float taxRate2 = 0.25;

    if (productcatagory < 1 or productcatagory> 5){
        cout << "Invalid product catagory\n";
    }
    else {
        switch (productcatagory) {
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
            }

            cout << "\nReceipt: \n";
            for (int n=1; n <= itemsSold; n++) {
                cout << "Item" << n << ": "  << productPrice << endl;
            }

    cout <<"\ntaxRate:\n";
    cout <<"" preprocessor taxrate :"  << taxRate1 << endl;
    cout <<"const taxRate: " << taxRate2 << endl;
    cout << " Product summary :\n";
    cout << "Name : "<< productsname << endl;
    cout << " product catagory: " << productcatagory << endl;
    cout << "initial inventory :" << initialInventory << endl;
    cout << "price :" << productprice << endl;
    cout << "Item sold: " << itemssold << endl;
    cout << " New inventory: " << newInventory << endl;
    cout << " Total sale: " << totalSales << endl;
    cout << " Inventory status: " << inventorystatus << endl;
    cout << " auto helper:" << helper1 << endl;
    cout << " decl helper: " << helper2 << endl;

     return 0;


}



