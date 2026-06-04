#include<iostream>
using namespace std;

class AccessSpecifierDemo {
    private:
    int x; // can be accessible only within this class

    protected:
    int y;  // accessible only within the same class and derived classes

    public:
    int z;  // can be accessible outside the class aswell
};

int main() {
    return 0;
}