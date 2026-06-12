#include<iostream>
using namespace std;

int main() {
    // if statement
    if(20 > 10) {
        cout << "20 is greater than 10" << endl;
    }

    // if else statement
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if(age >= 18) {
        cout << "Adult\n";
    } else {
        cout << "Minor\n";
    }

    // if else if statement
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(num > 0) cout << "Positive number\n";
    else if(num < 0) cout << "Negative number\n";
    else cout << "Zero" << endl;

    // ternary operator
    int time = 20;
    string result = time < 18 ? "Good day." : "Good evening.";
    cout << result << endl;

    // Nested ternary
    string message = (time < 12) ? "Good Morning." 
                    : (time < 18) ? "Good Afternoon" 
                    : "Good Evening.";

    cout << message << endl;
    
    return 0;
}
