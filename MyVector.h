
#ifndef MYVECTOR_H
#define MYVECTOR_H

class MyVector {
    int arr[100];
    int size;
public:
    MyVector(){size=0;};
    void add(int val);
    int get(int index);
    void removeLast();
    int getSize();
};

inline void MyVector::add(int val) {
    if (size < 100) {
        arr[size++] = val;
    }
}
inline int MyVector::get(int index) {
    if (index >= 0 && index < size) {
        return arr[index];
    }
    return -1;
}

inline void MyVector::removeLast() {
    if (size > 0) {
        size--;
    }
}
inline int MyVector::getSize() {
    return size;
}

#endif //MYVECTOR_H