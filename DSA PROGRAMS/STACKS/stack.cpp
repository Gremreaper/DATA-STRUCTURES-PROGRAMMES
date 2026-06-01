#include <bits/stdc++.h>
using namespace std;

class Stack {
public:
    int size;
    int top;
    int* arr;

    // Constructor
    Stack(int x) {
        size = x;
        top = -1;  // Initialize top to -1
        arr = new int[size];
    }

    // Push an element onto the stack
    void push(int elem) {
        if (size - top > 1) {
            top++;
            arr[top] = elem;
        } else {
            cout << "Overflow condition" << endl;
        }
    }

    // Pop an element from the stack
    void pop() {
        if (top >= 0) {
            top--;
        } else {
            cout << "Underflow Condition" << endl;
        }
    }

    // Peek at the top element of the stack
    int peek() {
        if (top >= 0) {
            return arr[top];
        } else {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    // Check if the stack is empty
    bool isempty() {
        return top == -1;
    }
};

int main() {
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);

    st.pop();

    cout << "Top element: " << st.peek() << endl;
    cout << "Is stack empty? " << (st.isempty() ? "Yes" : "No") << endl;

    return 0;
}
