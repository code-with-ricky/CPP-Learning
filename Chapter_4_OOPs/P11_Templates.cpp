#include<bits/stdc++.h>
using namespace std;
// templates allwos to write function or classes for different data types

template <typename T>
T add(T a, T b) {
    return a + b;
}

template <typename T1, typename T2>
class Pair {
    public:
    T1 first;
    T2 second;

    Pair(T1 f, T2 s){
        first = f;
        second = s;
    }

    void display(){
        cout << "First: " << first << " Second: " << second << endl;
    }
};

int main() {
    int a = 10, b = 11;
    int x = add(a, b);

    double c = 34.567, d = 39.687;
    double y = add(c, d);

    string e = "100", f = "3234";
    string z = add(e, f);

    cout << x << endl << y << endl << z << endl;


    Pair p1(2, 3);
    Pair p2("Amrik", "Bhadra");
    Pair p3(23, "Hiten");

    p1.display();
    p2.display();
    p3.display();
    
    return 0;
}