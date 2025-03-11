#ifndef MYSTACK2_H
#define MYSTACK2_H
#include "MyLinkedList.h"
#include <vector>
class MyStack2{
    MyLinkedList* head;
public:
    MyStack2(): head(nullptr){};
    void push(int val);
    void pop();
    int top();
    bool isEmpty();
    void printStack();
};
void MyStack2::push(int val) {
    MyLinkedList* Node = new MyLinkedList(val);
    if (head==nullptr) {
        head =Node;
    } else{
        MyLinkedList* temp=head;
        while (temp->next !=nullptr){
            temp = temp->next;
        }
        temp->next = Node;
    }
}
void MyStack2::pop() {
    if(head ==nullptr) return;
    if(head->next==nullptr){
        delete head;
        head=nullptr;
    }else{
        MyLinkedList* temp=head;
        while (temp->next->next !=nullptr) {
            temp=temp->next;
        }
        delete temp->next;
        temp->next=nullptr;
    }
}
int MyStack2::top() {
    if(head==nullptr) return -1;
    MyLinkedList* temp=head;
    while(temp->next !=nullptr){
        temp=temp->next;
    }
    return temp->val;
}
bool MyStack2::isEmpty() {
    return head == nullptr;
}
void MyStack2::printStack() {
    vector<int> temp;
    MyLinkedList* current=head;
    while(current !=nullptr){
        temp.push_back(current->val);
        current=current->next;
    }
    for(int k=temp.size()-1; k>=0; k--){
        cout<<temp[k]<<" ";
    }
    cout<<endl;
}
#endif //MYSTACK2_H