#include<iostream>
using namespace std;

class Employee {
    private:
    int salary;

    public:
    Employee(int s){
        salary = s;
    }

    // declare friend function
    // friend function is special function which is not member of class yet can access private members of that class
    friend void displaySalary(Employee emp);
};

void displaySalary(Employee emp){
    cout << "Salary: " << emp.salary << endl;
}

int main() {
    Employee emp(2000);
    displaySalary(emp);
    return 0;
}