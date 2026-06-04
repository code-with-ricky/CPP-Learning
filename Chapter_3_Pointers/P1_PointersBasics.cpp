#include<iostream>
using namespace std;

int main() {
    // Pointer is a variable which is used to store memory address as a value
    int num = 40;
    int* ptr = &num; // a pointer variable named which stores the address of variable num

    // output
    cout << "Value stored in num: " << num << endl;    // 40
    cout << "Memory address of num: " << &num << endl; // 0xa0ca1ff6d4
    cout << "ptr value: " << ptr << endl;              // 0xa0ca1ff6d4
    cout << "Value at ptr: " << *ptr << endl;          // 40
    // *ptr --> its called dereference and here * is called dereferece operator

    // Note: type of pointer variable matches the type of the variable for which pointer is being created

    string name = "Amrik";
    string* namePtr = &name;
    /*
        More two ways to declare pointer
        string *namePtr;
        string * namePtr;

        prefered is: string* namePtr;
    */

    /*
        Note: * sign used for two things:
        1. when used in declaration: it creates a pointer variable (string* ptr)
        2. when not used in declaration: it act as dereference operator
    */


    // changing the value using pointer (modify pointer value)
    *ptr = 455;
    cout << "Updated value of num: " << num << endl;
    return 0;
}