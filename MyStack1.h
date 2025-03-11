#ifndef MYSTACK1_H
#define MYSTACK1_H

#include "MyVector.h"

class MyStack1 {
private:
    MyVector vector;
public:
    void push(int value) { vector.push(value); }
    void pop() { vector.pop(); }
    bool isEmpty() { return vector.isEmpty(); }
    void printStack() { vector.printStack(); }
};

#endif