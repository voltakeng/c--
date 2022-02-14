#include <iostream> 
#include <vector> 

using namespace std; 

vector < vector<int> > movie_ratings
{
    {1,2,3,4},
    {1,2,4,4},
    {1,3,4,5}
};

int main(){
    cout << "\nHere are the movie rating for reviewer #1: " << endl;
    //using array syntax
    cout << movie_ratings[0][0] << endl; 
    cout << movie_ratings[0][1] << endl; 
    //using vector syntax 
    cout << movie_ratings.at(0).at(2) << endl; 
    cout << movie_ratings.at(0).at(3) << endl;

    cout << endl;
    return 0;
}