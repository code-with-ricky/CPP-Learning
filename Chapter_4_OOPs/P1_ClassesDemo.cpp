#include <iostream>
using namespace std;

// create class
class Student
{
    // class member variables
public:
    int sid;
    string firstName;
    string lastName;
    string branch;

    // class methods
public:
    void displayDetails()
    {
        cout << "Student Id: " << sid << endl;
        cout << "Student Name: " << firstName << " " << lastName << endl;
        cout << "Student branch: " << branch << endl;
    }

    // method declaration
    void greet();
};

// class method defined outside the class
void Student :: greet(){
    cout << "Hello Everyone" << endl; 
}

int main()
{
    // create object
    Student s1;

    // access member variables
    s1.sid = 1;
    s1.firstName = "Amrik";
    s1.lastName = "Bhadra";
    s1.branch = "Computer Engineering";

    // cout << "Student Id: " << s1.sid << endl;
    // cout << "Student Name: " << s1.firstName << " " << s1.lastName << endl;
    // cout << "Student branch: " << s1.branch << endl;

    s1.displayDetails();

    Student s2;
    s2.sid = 2;
    s2.firstName = "Koyal";
    s2.lastName = "Chakraborty";
    s2.branch = "Bcom";
    s2.displayDetails();

    return 0;
}