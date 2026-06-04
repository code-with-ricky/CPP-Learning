#include<iostream>
using namespace std;

// Poly -> many, morphism -> forms
// one function used for different purpose

class Animal {
    public:
    void animalSound(){
        cout << "animal makes sound" << endl;
    }
};

class Pig: public Animal {
    public:
    void animalSound() {
        cout << "Pig makes sound" << endl;
    }
};

class Dog: public Animal {
    public:
    void animalSound() {
        cout << "Dog makes sound" << endl;
    }
};

int main(){
    Animal animal;
    Pig pig;
    Dog dog;

    animal.animalSound();
    pig.animalSound();
    dog.animalSound();

    Animal* a;
    a = &dog;
    a->animalSound();  // since animalSound() is not virtual function
                       // even if dog class reference is stored in 'a' pointer, yet Animal class's version of animalSound() called
    return 0;
}