#include <iostream>
using namespace std;

int main()
{

    int x;
    cout << "enter num ";
    cin >> x;
    int n =1;
    
    for (int y = x; y > 0; y--){
        n *= y;}


    cout << n;
    return 0;

}