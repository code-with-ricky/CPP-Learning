#include <iostream>
#include <set>
using namespace std;

int main()
{
    // create a set
    set<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // print set elements
    for (string car : cars)
    {
        cout << car << " ";
    }
    cout << endl;

    set<int> numbers = {4, 3, 8, 1, 7, 5, 6, 2};
    for (int num : numbers)
    {
        cout << num << " ";
    }cout << endl;

    // Sort set in descending order
    set<int, greater<int>> nums = {4, 3, 8, 1, 7, 5, 6, 2};
    for (int num : nums)
    {
        cout << num << " ";
    }cout << endl;


    // unique elements
    // set only contains unique elements
    set<int> mySet = {1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 4, 5};
    for(int ele: mySet){
        cout << ele << " ";
    }cout << endl;

    // Add elements in set
    mySet.insert(30);
    mySet.insert(40);

    // remove elements from set
    mySet.erase(2);
    mySet.erase(4);

    for(int ele: mySet){
        cout << ele << " ";
    }cout << endl;

    // remove all elements
    mySet.clear();

    // size of set
    cout << "Size of mySet: " << mySet.size() << endl;

    // check if set is empty
    if(mySet.empty()) cout << "Set is empty\n";
    else cout << "Set is not empty\n";

    return 0;
}
