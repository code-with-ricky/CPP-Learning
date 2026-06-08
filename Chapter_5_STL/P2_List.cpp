#include<iostream>
#include<list>
using namespace std;

int main() {
    // List is same as vector for storing multiple data of same type
    // difference than vector is:
    // --> we can add and remove items from begin and end both
    // --> we cannot access elements of list randomly like we can do in vectors

    // create list
    list<string> cars = {"Volvo", "BMW", "Audi", "Ford", "Pagani"};

    // loop throw list items
    for(string car: cars){
        cout << car << " ";
    }cout << endl;

    // access a list
    // front(): first element
    cout << "Front element: " << cars.front() << endl;
    
    // back(): last element
    cout << "Last element: " << cars.back() << endl;

    // change list element
    // change first element
    cars.front() = "Buggati";
    // change last element
    cars.back() = "Maruti";

    for(string car: cars){
        cout << car << " ";
    }cout << endl;

    // Add list items
    // .push_front(element)
    cars.push_front("Mustang");

    // .push_back(element)
    cars.push_back("Cheverolet");

    for(string car: cars){
        cout << car << " ";
    }cout << endl;

    // remove list element
    // .pop_front()
    cars.pop_front();

    // .pop_back()
    cars.pop_back();

    for(string car: cars){
        cout << car << " ";
    }cout << endl;


    // List size
    cout << "Size of list: " << cars.size() << endl;

    // check if list is empty or not
    cout << "Is cars list empty?: " << cars.empty() << endl;

    // loop through list
    for(string car: cars) {
        cout << car << " ";
    }cout << endl;

    // NOTE: we cannot access list items by index so we cannot run loop from i = 0 to i<cars.size()

    // clear list
    cars.clear();

    return 0;
}