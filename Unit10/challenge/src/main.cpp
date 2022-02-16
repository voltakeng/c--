#include <iostream> 
#include <string> 

using namespace std; 

int main(){

    string alphabet {" .abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"@$^!*)#ZXCVBNM,./ASDFGHJ][poiuytrewqasdfghjkl;'+_)"};
    string msg;

    cout << "\nEnter your secret message: ";
    getline(cin,msg);

    cout << "\nEncrypting message..." << endl;

    for(size_t i=0; i < msg.size(); i++){
        for(size_t j=0; j < key.size(); j++){
            if(msg.at(i) == alphabet.at(j)){
                msg.at(i) = key.at(j);
                break;
            }
        }
    }

    cout << "\nEncrypted message: " << msg << endl;

    cout << "\nDecrypting message..." << endl;

    for(size_t i=0; i < msg.size(); i++){
        for(size_t j=0; j < key.size(); j++){
            if(msg.at(i) == key.at(j)){
                msg.at(i) = alphabet.at(j);
                break;
            }
        }
    }

    cout << "\nDecrypted message: " << msg << endl;

    cout << endl;
    return 0;
}