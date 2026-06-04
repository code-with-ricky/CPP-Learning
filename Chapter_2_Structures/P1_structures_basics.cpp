#include<iostream>
#include<string>
using namespace std;

struct {
    int studId;
    string studentName;
} s1, s2;

// Named Structure
struct Employee {
    int empId;
    string empName;
    double salary;
};

int main() {
    // access structure members using dot operator
    s1.studId = 1;
    s1.studentName = "Amrik Bhadra";

    s2.studId = 2;
    s2.studentName = "Koyal Chakraborty";

    cout << "Student 1: " << s1.studId << " --> " << s1.studentName << endl;
    cout << "Student 2: " << s2.studId << " --> " << s2.studentName << endl;

    Employee emp1, emp2;
    emp1.empId = 1;
    emp1.empName = "John";
    emp1.salary = 45000.00;

    emp2.empId = 2;
    emp2.empName = "Rock";
    emp2.salary = 54030.33;

    cout << "\nEmployee 1 --> " << emp1.empId << ", " << emp1.empName << ", " << emp1.salary << endl;
    cout << "Employee 2 --> " << emp2.empId << ", " << emp2.empName << ", " << emp2.salary << endl;

    return 0;
}