#ifndef MYVECTOR_H
#define MYVECTOR_H

#include <iostream>
using namespace std;

class MyVector {
private:
    int arr[100];
    int size;
public:
    MyVector() : size(0) {}
    bool isEmpty() { return size == 0; }
    void push(int value) { if (size < 100) arr[size++] = value; }
    void pop() { if (size > 0) size--; }
    void printStack() {
        for (int i = size - 1; i >= 0; i--) cout << arr[i] << " ";
        cout << endl;
    }
};

#endif // MYVECTOR_H
