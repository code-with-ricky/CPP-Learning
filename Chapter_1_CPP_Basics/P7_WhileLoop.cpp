#include<iostream>
using namespace std;

int main() {
    int i=0;
    while(i < 10) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    int num = 1;
    while(num <= 10){
        if(num % 2 == 0) continue;
        cout << num << " ";
        num++;
    } cout << endl;


    return 0;
}