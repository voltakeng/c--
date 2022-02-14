#include <iostream> 

using namespace std;

int main(){
    int number_smallroom {0}; 
    int number_largeroom {0};

    cout << "Estimate for carpet cleaning service" << endl; 
    cout << "Number of small room: ";
    cin >> number_smallroom; 
    cout << "Number of large room: "; 
    cin >> number_largeroom; 
    cout << "Price per small room: $25" << endl; 
    cout << "Price per large room: $35" << endl; 
    cout << "Cost: $" << (number_smallroom*25)+(number_largeroom*35) << endl; 
    cout << "Tax: $" << ((number_smallroom*25)+(number_largeroom*35))*0.06 << endl; 
    cout << "============================================" << endl;
    cout << "Total estimate: $" << ((number_smallroom*25)+(number_largeroom*35))+(((number_smallroom*25)+(number_largeroom*35))*0.06) << endl;
    cout << "This estimate is valid for 30 days" << endl; 

    return 0;  
}