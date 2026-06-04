#include<iostream>
using namespace std;

int main() {
    // A reference variable is an alias for an existing variable. It is created using the '&' operator
    string food = "curd rice";
    string &meal = food; // reference to food

    // food and meal refer(point) to same memory location

    meal = "Burger"; // changes both meal and food
    cout << "Food: " << food << endl;
    cout << "Meal: " << meal << endl;
    return 0;
}