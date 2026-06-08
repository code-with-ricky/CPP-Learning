#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<string> cars = {"Volvo", "BMW", "Ford", "Audi"};
    // create a vector iterator
    vector<string>::iterator it;
    for(it = cars.begin(); it != cars.end(); it++) {
        cout << *it << " ";
    }cout << endl;

    // begin() returns an iterator that points to the first element of the data structure.
    // end() returns an iterator that points to one position after the last element.

    // auto keyword
    // >= c++ 11 version
    // rather than explicitly declaring and specifiying the type of the iterator
    // we can use auto
    auto itr = cars.begin(); // points to first element
    auto secondIt = cars.begin() + 1; // points to send element
    auto lastIt = cars.end();  // points to last element
    auto secondLastIt = cars.end() - 1;  // points to second last element

    for(auto itr = cars.begin(); itr != cars.end(); ++itr){
        if(*itr == "BMW"){ 
            itr = cars.erase(itr); // remove the BMW element
        }else{
            ++itr;
        }
    }

    for(const string& car: cars) {
        cout << car << "\n";
    }

    return 0;
}