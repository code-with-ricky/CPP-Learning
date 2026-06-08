#include<iostream>
#include<vector>
using namespace std;

int main() {
    // vector is an array with dynamic size
    // it is used to store multiple values of same data type
    // vector grow and shrink size as needed

    // create a vector of string types
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // print vector elements
    for(string car: cars) {
        cout << car << " ";
    }cout << endl;

    // access vector element
    // using index number in []
    cout << "Car at index 2 : " << cars[2] << endl;
    
    // Vector methods
    // 1. .front() --> get the first element
    cout << "First element: " << cars.front() << endl;
    // 2. .back() --> get the last element
    cout << "Last element: " << cars.back() << endl;

    // 3. .at(index) --> to get element at particular index
    cout << "Element at index 1 : " << cars.at(1) << endl;
    // NOTE: .at() is peferred over [index] as .at() gives error if any

    // change vector element
    cars[1] = "Mercedes";
    // safer to use .at(index)
    cars.at(3) = "Maserati";
    
    for(string car: cars) {
        cout << car << " ";
    }cout << endl;

    // 4. .push_back(element): add element in vector from end
    cars.push_back("Jaguar");
    cars.push_back("Pagani");
    cars.push_back("Mitsubishi");

    for(string car: cars) {
        cout << car << " ";
    }cout << endl;

    // 5. .pop_back(): remove element from vector's end
    cars.pop_back(); // removed "Mitsubishi"
    for(string car: cars) {
        cout << car << " ";
    }cout << endl;


    // 6. .size(): vector size
    cout << "Size of cars vector: " << cars.size() << endl;

    // 7. .empty(): checks if vector is empty
    cout << "Is is cars vector empty? : " << cars.empty() << endl;

    // 8. .clear(): removes all vector elements
    cars.clear();
    cout << "Size of vector cars: " << cars.size() << endl;

    return 0;
}
