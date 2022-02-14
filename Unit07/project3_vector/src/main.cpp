#include <iostream> 
#include <vector> 

using namespace std;

int main(){
    vector <int> test_scores {100,95,99};

    cout << "First score at index 0: " << test_scores.at(0) << endl;    //100
    cout << "First score at index 1: " << test_scores.at(1) << endl;    //95 
    cout << "First score at index 2: " << test_scores.at(2) << endl;    //87 

    test_scores.push_back(80);  //100,95,99,80
    test_scores.push_back(60);  //100,95,99,80,60

    cout << "\nThere are " << test_scores.size() << " scores in the vector" << endl; 

    return 0;
}