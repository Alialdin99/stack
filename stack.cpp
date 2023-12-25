#include "stack.h"
template<typename T>
stack<T>::stack(int n)
{
    capacity = n;
    size = 0;
    data = new T[capacity];


}

template<typename T>
void stack<T>::push(T element)
{
    data[size] = element;
    size++;
}

template<typename T>
T stack<T>::pop()
{
    T temp = data[size-1];
    data[size] = ' ';
    size--;
    return temp;
}

template<typename T>
T stack<T>::top()
{
    T temp = data[size-1];
    return temp;
}

template<typename T>
bool stack<T>::isEmpty()
{
    return (size==0);
}

template<typename T>
int stack<T>::stackSize()
{
    return size;
}

template<typename T>
void stack<T>::clear()
{
    delete[] data;
    data  = new T[capacity];
    size = 0;
}

template<typename T>
void stack<T>::print()
{
    for(int i = size -1 ; i >=0; i--)
    {
        std::cout<<data[i]<<" ";
    }
}
