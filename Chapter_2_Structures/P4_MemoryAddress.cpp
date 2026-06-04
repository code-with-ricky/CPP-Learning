#include<iostream>
using namespace std;

int main() {
    // & operator is used to create reference variable and also use to get memory location of a variable
    // memory address is a hexadecimal value (0x...)

    string food = "Pizza";
    cout << &food << endl;  // sample value: 0x35f43ffc60
    return 0;
}