#include<bits/stdc++.h>
using namespace std;

class Animal {
    public:
    virtual void sound(){
        cout << "Animal Sound\n";
    }
};

class Pig: public Animal {
    public:
    void sound() override {
        cout << "Pig Sound\n";
    }
};

class Dog : public Animal {
    public:
    void sound() override {
        cout << "Dog sound\n";
    }
};

int main() {
    Animal* animal;
    Dog dog;
    Pig pig;
    animal = &dog;
    animal->sound(); // Dog Sound

    animal = &pig;
    animal->sound(); // Pig Sound
    

    /*
        Since sound() is virtual now, the call uses the actual object function and not just the pointer type
        
        Use virtual only in the base class
        Use override (optional, but recommended) in the derived class for clarity 

        animal->sound() can also be written as (*animal).sound()
    */ 

    return 0;
}