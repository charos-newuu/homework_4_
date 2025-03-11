#ifndef MYLINKEDLIST_H
#define MYLINKEDLIST_H

#include <iostream>
using namespace std;

class MyLinkedList {
public:
    int value;
    MyLinkedList* next;

    MyLinkedList(int val) : value(val), next(nullptr) {}
};

#endif // MYLINKEDLIST_H
