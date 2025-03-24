#include <iostream>
using namespace std;
int main(){
    int x;
    cout <<"enter number: ";
    cin >> x;

    int factorial = 1;

    for (int i=x; i>0; i--){
        factorial = factorial * i;

    }

    cout<< factorial;
    return 0;
}