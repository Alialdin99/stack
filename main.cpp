#include "stack.cpp"
int main() {
    stack<int> stk(5);
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.push(5);

    stk.print();
}
