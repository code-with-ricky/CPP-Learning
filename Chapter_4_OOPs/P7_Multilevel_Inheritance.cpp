#include<iostream>
using namespace std;

class Parent {
    public:
    void myFunction() {
        cout << "parent class" << endl;
    }
};

class Child : public Parent {
};

class GrandChild: public Child {

};


int main() {
    GrandChild gc;
    gc.myFunction();
    return 0;
}