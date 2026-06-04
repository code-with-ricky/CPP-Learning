#include<iostream>
using namespace std;

int main(){
    // when you declare a variable, compiler automatically reserves memory in computer's memory
    int num = 10;
    cout << sizeof(num) << endl; // 4 bytes


    // new keyword --> helps to manage memory ourselves
    // creates memory space for out variable
    int* ptr = new int;
    *ptr = 100; // assign value in that memory location
    cout << *ptr << endl;

    /*
        Explaination
        --> new int creates memory space for one integer
        --> ptr stores the memory address of that space
        --> *ptr = 35, stores 35 in that space
    */

    // when you create a memory space using 'new'
    // its our responsibility to remove it when its done
    delete ptr;

    /*
        What if foorgot to use delete?
        --> program keeps on running, variable may use more and more memory over time
        --> this is called memory leak
        --> it slow down or crash the program
    */


    // dynamic array
    int fruitsCount;
    cout << "Enter fruits count: ";
    cin >> fruitsCount;

    // creates a dynamic array of initial size arrSize
    string* fruits = new string[fruitsCount];

    // ignore the leftover newline character after reading fruitsCount
    cin.ignore();

    // enter fruits names
    for(int i=0; i < fruitsCount; i++){
        cout << "Enter name of fruit " << (i+1) << " : ";
        getline(cin, fruits[i]);
    }

    // display list
    for(int i=0; i < fruitsCount; i++){
        cout << fruits[i] << " ";
    }cout << endl;

    delete[] fruits; // clean the memory
    return 0;
}