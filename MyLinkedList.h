
#ifndef MYLINKEDLIST_H
#define MYLINKEDLIST_H
class MyLinkedList {
public:
    int val;
    MyLinkedList* next;
    MyLinkedList(int v);

};
inline MyLinkedList::MyLinkedList(int v) {
    val=v;
    next =NULL;
}

#endif //MYLINKEDLIST_H
