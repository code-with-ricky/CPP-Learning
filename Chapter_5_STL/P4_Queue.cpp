#include<iostream>
#include<queue>
using namespace std;

// A queue stores multiple elements in a specific order, called FIFO.
// FIFO stands for First in, First Out
// queue are not accessed by index numbers.

int main() {
    // Create a queue
    queue<int> nums;

    // add elements in queue
    nums.push(1);
    nums.push(2);
    nums.push(3);
    nums.push(4);

    // Queue: 1 2 3 4

    // Access Queue elements
    // access from front -> .front()
    cout << "Element at queue front: " << nums.front() << endl;
    // acces from end --> .back()
    cout << "Element at queue back: " << nums.back() << endl;

    // Change front and back elements
    nums.front() = 10;
    nums.back() = 20;
    // Queue becomes: 10, 2, 3, 20

    cout << "Element at front: " << nums.front() << endl;
    cout << "Element at back: " << nums.back() << endl;

    // remove elements from queue
    // .pop()
    nums.pop(); // remove element from front
    // Queue becomes: 2, 3, 20
    cout << "Element at front: " << nums.front() << endl;

    // check if queue is empty
    if(nums.empty()) cout << "queue is empty" << endl;
    else cout << "queue is not empty" << endl;

    // Size of queue
    cout << "Size of queue: " << nums.size() << endl;

    return 0;
}