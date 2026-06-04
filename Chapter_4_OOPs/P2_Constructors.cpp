#include <iostream>
using namespace std;

class Employee
{
public:
    string empId;
    string empName;
    string department;

public:
    Employee()
    {
        empId = "";
        empName = "";
        department = "";
    }
    Employee(string empId, string empName, string department)
    {
        this->empId = empId;
        this->empName = empName;
        this->department = department;
    }

    // constructor declaration
    Employee(string empId, string empName);

public:
    void display()
    {
        cout << empId << " " << empName << " " << department << endl;
    }
};

// constructor defined outside the class
Employee::Employee(string empId, string empName)
{
    this->empId = empId;
    this->empName = empName;
    department = "Marketing";
}

int main()
{
    Employee emp1;
    Employee emp2("EMP-0089", "Rick Jonathan", "Tech");
    Employee emp3("EMP-673", "Shane Jonnes");

    emp1.display();
    emp2.display();
    emp3.display();
    return 0;
}