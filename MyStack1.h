#ifndef MYSTACK1_H
#define MYSTACK1_H
using namespace std;
#include "MyVector.h"
class MyStack1:public MyVector {
    MyVector data;;
public:
    void push(int val);
    void pop();
    int top();
    bool isEmpty();
    void printStack();
};
void MyStack1::push(int val) {
    data.add(val);
}
void MyStack1::pop() {
    data.removeLast();
}
int MyStack1::top() {
    return data.get(data.getSize()-1);
}
bool MyStack1::isEmpty() {
    return data.getSize() == 0;
}
void MyStack1::printStack() {
    for (int i=data.getSize()-1;i>=0;i--){
        cout<< data.get(i)<<" ";
    }
    cout<< endl;
}

#endif //MYSTACK1_H