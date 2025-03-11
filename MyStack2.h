#ifndef MYSTACK2_H
#define MYSTACK2_H

#include "MyLinkedList.h"

class MyStack2 {
private:
    MyLinkedList* head;
public:
    MyStack2() : head(nullptr) {}

    void push(int value) {
        MyLinkedList* newNode = new MyLinkedList(value);
        newNode->next = head;
        head = newNode;
    }

    void pop() {
        if (head) {
            MyLinkedList* temp = head;
            head = head->next;
            delete temp;
        }
    }

    bool isEmpty() { return head == nullptr; }

    void printStack() {
        MyLinkedList* current = head;
        while (current) {
            cout << current->value << " ";
            current = current->next;
        }
        cout << endl;
    }
};

#endif // MYSTACK2_H
