#include<iostream>
using namespace std;

class Father {
    public:
    void greetFromFather(){
        cout << "Hello Father this side" << endl;
    }
};

class Mother {
    public:
    void greetFromMother() {
        cout << "Hello Mother this side" << endl;
    }
};

class Child : public Father, public Mother {
};

int main() {
    Child child;
    child.greetFromFather();
    child.greetFromMother();
    return 0;
}