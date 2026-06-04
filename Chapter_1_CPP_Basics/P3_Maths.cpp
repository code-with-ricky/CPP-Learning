#include<iostream>
#include<cmath>
using namespace std;

int main() {
    cout << "Max of 4 and 5: " << max(4, 5) << endl;
    cout << "Minimum of 4 and 5: " << min(4, 5) << endl;

    // other math methods are found in header file cmath
    cout << "Square root of 54: " << sqrt(54) << endl;
    cout << "Round of of 2.6: " << round(2.6) << endl;
    cout << "LOG base 10 of 2: " << log(2) << endl;
    cout << "2 to the power 3: " << pow(2, 3) << endl;
    cout << "floor of 3.6: " << floor(3.6) << endl;
    cout << "ceil of 3.6: " << ceil(3.6) << endl;
    return 0;
}