#include<iostream>
#include<stack>
using namespace std;

int main() {

    // Stack is data structure in which data is added in LIFO order
    // Last In First Out (LIFO)
    // we cannot directly access random number from stack
    // we can access only top element of stack

    // Create stack
    // stack<string> fruits = {"apple", "banana", "kiwi"};  // cannoot be done
    stack<string> fruits;

    // Add element
    // .push(element)
    fruits.push("mango");
    fruits.push("apple");
    fruits.push("kiwi");
    fruits.push("watermelon");

    // Access stack element
    // stack element can be accessed from top itself
    cout << "Element at top: " << fruits.top() << endl;

    // Change top element
    fruits.top() = "musk melon"; // watermelon --> musk melon
    cout << "Element at top: " << fruits.top() << endl;

    // remove element
    // element is removed from top itself
    fruits.pop(); // removes musk melon
    cout << "Element at top: " << fruits.top() << endl;

    // size of stack
    cout << "Size of fruits stack: " << fruits.size() << endl;

    // check if stack is emptu
    if(fruits.empty()) cout << "Stack is empty" << endl;
    else cout << "Stack is not empty" << endl;

    return 0;
}