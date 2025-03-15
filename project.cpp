#include <iostream>
#include <string>
#define taxRate1 0.15

int main(){
    std::cout << "Hello everyone this is the program which analyzes the products sales and inventory for stores.\n";
    std::cout << "And feel free to use any word and numbers as describe since c++ this is compiled programing language.\n";
    std::cout << "THANK YOU!\n";

    string productsname;
    int productcatagory;
    int initialinventory;
    float productprice;
    int itemssold;


    int newinventory = (initialinventory - itemssold);
    float totalsales = (itemssold * productprice);

    string inventorystatus;
    inventorystatus 
    if (newInventory < 10)
        cout <<" Low Inventory";
    else
        cout <<" Sufficient Inventory";

    int directinit = 10;
    int assigninit; 
    assigninit = 20;
    int listinit{30};




    auto helper1 = totalSales;
    decltype(initialInventory) helper2 = 100;

    
    const double taxRate2 = 0.25;



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

    if (productcatagory < 1 or productcatagory> 5){
        cout << "Invalid product catagory\n";
    }
    else {
        switch (catagories) {
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
    for (int n=1; n <= itemssold; n++) {
        cout << "Item" << n <<": ", << productprice << endl;
    }
        
        
        cout << " report \n";
        cout << "tax rate :" << taxRate1 << "(preprocessor), " << taxRate2 << "(const)\n";
        cout << "product: " << productsname <<"\n catagory:" << productcatagory
        cout << "\n initial:" <<initialinventory  +     itemssold
          return 0;


}