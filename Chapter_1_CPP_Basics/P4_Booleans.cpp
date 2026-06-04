#include<iostream>
using namespace std;

int main(){
    bool isLoggedIn = true; // internally its stored as 1
    bool isMinor = false; // stored as 0
    cout << "Is user logged in: " << isLoggedIn << endl;
    cout << "Is Minor: " << isMinor << endl;

    cout << boolalpha; // if want to print true/false do this; after this line it will be printed as true or false
    // its not a data type --> its a I/O manipulator
    cout << "Is user logged in: " << isLoggedIn << endl;
    cout << "Is Minor: " << isMinor << endl;

    // reset back to 0/1
    cout << noboolalpha;
    cout << "Is user logged in: " << isLoggedIn << endl;
    cout << "Is Minor: " << isMinor << endl;

    return 0;
}