#include <iostream> 

using namespace std; 

int main(){
    char vowels[] {'a','e','i','o','u'};
    cout << "\nThe first vowel is: " << vowels[0] << endl; 
    cout << "The last vowel is: " << vowels[4] << endl; 

    cout << "\nNotice what the value of the array name is: " << vowels << endl; 
    return 0;
}