#include<iostream>
#include<map>

using namespace std;
int main() {
    // Map stores elements in "key/value" pairs
    // Elements in a map are:
    // --> accessible by keys (not index)
    // --> each key is unique
    // --> automatically stored in ascending order by their keys

    // create map
    map<string, int> people = {
        { "John", 32 },
        { "Adele", 45 },
        { "Bob", 29 }
    };

    // Access a map
    cout << "John is: " << people["John"] << endl;

    // Change values
    people["John"] = 50;
    cout << "Updated John is: " << people["John"] << endl;

    // .at() can be used for changing values
    people.at("Bob") = 400;
    cout << "Updated Bob is: " << people["Bob"] << endl;

    // Add elements
    people["Jenny"] = 22;
    people["Liam"] = 24;
    people["Anja"] = 30;
    people["Kasper"] = 45;

    // Also can use .insert({key: value});
    people.insert({"Adrian", 66});
    people.insert({"Danny", 78});

    // Elements with equal keys
    people.insert({"Adrian", 100}); // we dont have duplicate keys
                                    // just value of the key get upated

    // Remove Elements
    // .erase(key)
    people.erase("Jenny");

    // remove all elements
    people.clear();

    // Size of map
    cout << "Size of people: " << people.size() << endl;

    // check if map is empty
    if(people.empty()) cout << "people map is empty" << endl;
    else cout << "people map is not empty" << endl;

    // check if any particular key is present or not
    cout << "Jhon is available or not? -> " << (people.count("John") == 1 ? "Yes" : "No") << endl;

    // Loop through map
    for(auto person: people) {
        cout << person.first << " is: " << person.second << endl;
    }


    // if you want map in reverse order
    map<string, int, greater<string>> fruits = {{"apple", 222}, {"kiwi", 450}, {"avacado", 340}, {"watermelon", 80}};
    for(auto fruit: fruits) {
        cout << fruit.first << " --> Rs. " << fruit.second << endl;
    }

    return 0;
}