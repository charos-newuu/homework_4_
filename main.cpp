#include "MyStack1.h"
#include "MyStack2.h"

int main() {
    MyStack1 s1;
    MyStack2 s2;
    int num;

    cout << "Enter values (use -1 for backspace, -99 to stop): ";
    while (true) {
        cin >> num;
        if (num == -99) break;
        if (num == -1) {
            if (!s1.isEmpty()) s1.pop();
            if (!s2.isEmpty()) s2.pop();
        } else {
            s1.push(num);
            s2.push(num);
        }
    }

    cout << "MyStack1: ";
    s1.printStack();
    cout << "MyStack2: ";
    s2.printStack();

    return 0;
}
