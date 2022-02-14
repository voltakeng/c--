#include <iostream>
#include <vector>
using namespace std;

/*
1 dollar is 100 cents
1 quarter is 25 cents
1 dime is 10 cents
1 nickel is 5 cents, and 
1 penny is 1 cent.
*/

int num; 

int main(){
    cout << "\nEnter an amount in cents: ";
    cin >> num;

    cout << "\nYou can provide this change as follows:" << endl;
    
    cout << "dollars :" << num/100 << endl; //0
    num = num%100; //92

    cout << "quarters :" << num/25 << endl; //3
    num = num%25; //17

    cout << "dimes :" << num/10 << endl; //1
    num = num%10; //7

    cout << "nickels :" << num/5 << endl; //1
    cout << "pennies :" << num%5 << endl; //1

    cout << endl;
    return 0;
}