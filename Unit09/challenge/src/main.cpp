#include <iostream> 
#include <vector> 

using namespace std; 

vector<int> number {}; 
char ch;

void print_number(){
    cout << "[ ";
    for(size_t i=0; i<number.size(); i++){
        cout << number.at(i) << " ";
    }
    cout << "]" << endl;
}

void add_number(){
    int num;
    cout << "Enter number: ";
    cin >> num;
    number.push_back(num);
    cout << num << " added" << endl;
}

void mean_number(){
    int sum {0};
    for(size_t i=0; i<number.size(); i++){
        sum = sum + number.at(i);
    }
    cout << "Mean: " << sum/number.size() << endl;
}

void smallest_number(){
    if(number.size() == 0){
        cout << "List empty, please add some number and try agin" << endl;
    }else{
        int min;
        min = number.at(0);
        for(size_t i=0; i<number.size(); i++){
            min = (min >= number.at(i)) ? number.at(i):min;
        }
        cout << "Min: " << min << endl;
    }
}

void largest_number(){
    if(number.size() == 0){
        cout << "List empty, please add some number and try agin" << endl;
    }else{
        int max;
        max = number.at(0);
        for(size_t i=0; i<number.size(); i++){
            max = (max <= number.at(i)) ? number.at(i):max;
        }
        cout << "Max: " << max << endl;
    }
}

void mode(char ch){
    switch(ch){
        case 'P': case 'p': 
            print_number(); 
            break;
        case 'A': case 'a':
            add_number();
            break;
        case 'M': case 'm':
            mean_number();
            break;
        case 'S': case 's':
            smallest_number();
            break;
        case 'L': case 'l':
            largest_number();
            break;
        case 'Q': case 'q':
            cout << "Goodbye" << endl; 
            break;
        default:
            cout << "Unknown selection, please try again" << endl;
            break;
    }
}

int main(){
    do{

        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl; 
        cout << "L = Display the largest number" << endl;
        cout << "Q - Quit" << endl;

        cout << "\nEnter your choice: ";
        cin >> ch;
        mode(ch);

    }while(ch != 'Q' && ch !='q');
   
    return 0;
}