#include <iostream>
#include <string> // need to include string library
using namespace std;

int main()
{
    string greetings = "Hello";
    cout << greetings << endl;

    // String concatenation (using + operator)
    string firstName = "Amrik";
    string lastName = "Bhadra";
    string fullName = firstName + " " + lastName;
    cout << "Full Name is: " << fullName << endl;

    // append()
    // Strings in C++ are objects which have certain operations to perform
    string welcomeSentence = greetings.append(" Everyone!");

    // Note: + operator is used for both adding and concatenation
    // int + int => int
    // string + string => string
    // string + int or int + string => error
    int a = 4, b = 5;
    int c = a + b; // 9
    cout << c << endl;

    string x = "40", y = "44";
    string z = x + y; // 4044
    cout << z << endl;

    // string length --> length()
    cout << "length of firstname using length(): " << firstName.length() << endl;
    cout << "length of firstname using size(): " << firstName.size() << endl;

    // Access string
    // consider string as character array so use index to access any charavter of string
    // or to have substring
    string myString = "hello";
    cout << myString[2] << endl;
    myString[3] = 't';
    cout << myString << endl;
    cout << "last character of myString: " << myString[myString.length() - 1] << endl;

    // <string> also provide .at() which can also be used to find the character at given index of string
    cout << myString.at(3) << endl;
    cout << myString.at(myString.length() - 1) << endl;
    // cout << "Character at index 45: " << myString[45] << endl;
    // cout << "Character at index 45: " << myString.at(45) << endl;

    // Special Characters
    /*
        backslash characters
        use \" or \' or \\
        \n -> new line
        \t -> tab space
    */
    cout << "My name is \'Amrik Bhadra\'" << endl;

    // User input for strings
    // string collegeName1;
    // cout << "Enter your college name: ";
    // cin >> collegeName1;
    // cout << "Your college name is: " << collegeName1 << endl;

    // NOTE: issue with cin is it takes only first word as input
    // as soon as white space is seen, it stops accepting
    // therefore use getline()
    string collegeName;
    cout << "Enter college name again: ";
    getline(cin, collegeName);
    cout << "College name: " << collegeName << endl;

    return 0;
}