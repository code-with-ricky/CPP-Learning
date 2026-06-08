#include<iostream>
#include<deque>
using namespace std;

// A deque (stands for double-ended queue)
// it is more flexible, as elements can be added and removed from both ends (at the front and the back). 
// we can also access elements by index numbers.

int main() {
    deque<string> cars = {"volvo", "bmw", "audi", "ford", "mercedes"};
    // Access deque elements
    // using index number
    cout << "Element at index 2: " << cars[2] << endl;
    // .at()
    cout << "Element at index 1: " << cars.at(1) << endl;
    // front element
    cout << "Element at front: " << cars.front() << endl;
    // last element
    cout << "Element at end: " << cars.back() << endl;


    // Change deque elements
    cars.at(2) = "Hyundai";
    cars[1] = "Lotus";
    cars.front() = "Maseratti";
    cars.back() = "Pagani";
    for(string car: cars) {
        cout << car << " ";
    }cout << endl;


    // Add elements in deque
    // push_front()
    cars.push_front("Bugatti");
    // push_back()
    cars.push_back("Kia");

    for(string car: cars) {
        cout << car << " ";
    }cout << endl;
    
    // Remove deque elements
    cars.pop_front();
    cars.pop_back();

    for(string car: cars) {
        cout << car << " ";
    }cout << endl;

    // Deque size
    cout << "Size of deque: " << cars.size() << endl;

    // check if deque is empty
    if(cars.empty()) cout << "Deque is empty\n";
    else cout << "Deque is not empty\n";
    return 0;

    // Loo through deque
    for(int i=0; i<cars.size(); i++){
        cout << cars[i] << " ";
    }cout << endl;
}