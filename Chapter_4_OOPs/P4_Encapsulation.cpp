#include<iostream>
using namespace std;

// Encapsulation means hiding sensitive data from the users
// achieved by making class variables private using access specifiers
// we can use public getters and setters to access private members

class BankAccount {
    private:
    long accountNumber;
    double salary;

    public:
    long getAccountNumber(){
        return accountNumber;
    }
    void setAccountNumber(long accNo){
        accountNumber = accNo;
    }
    double getSalary(){
        return salary;
    }
    void setSalary(double s){
        salary = s;
    }
};

int main() {
    BankAccount ba;
    ba.setAccountNumber(1234556);
    ba.setSalary(23400.00);

    cout << ba.getAccountNumber() << " --> " << ba.getSalary() << endl;
    return 0;
}