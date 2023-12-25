#include <iostream>

#ifndef STACK_STACK_H
#define STACK_STACK_H
template <typename T>
class stack
{
private:
    T* data;
    int size;
    int capacity;
public:
    stack(int n);
    void push(T element);
    T pop();
    T top();
    bool isEmpty();
    int stackSize();
    void clear();
    void print();

};
#endif //STACK_STACK_H
