#include <iostream>
using namespace std;

// declare the size of the array as constant
const int MAX_SIZE = 10;

int top = -1;

int array[MAX_SIZE];

bool is_empty() {
    return top == -1;
}

bool is_full() {
    return top == MAX_SIZE - 1;
}

void push(int data) {
    if (is_full()) {
        cout << "Stack overflow." << endl;
        return;
    }
    array[++top] = data;
    cout << "Pushed element : " << data << endl;
}

void pop() {
    if (is_empty()) {
        cout << "Stack underflow." << endl;
        return;
    }
    int pop_value = array[top--];
    cout << "Popped value : " << pop_value << endl;
}

void peek() {
    if (is_empty()) {
        cout << "Stack is empty." << endl;
        return;
    }
    int peek_value = array[top];
    cout << "Peeked value : " << peek_value << endl;
}

int size() {
    if (is_empty()) {
        return 0;
    }
    return top + 1;
}

void display() {
    if (is_empty()) {
        cout << "Stack is empty." << endl;
        return;
    }
    for (int i = top; i >= 0; i--) {
        cout << array[i] << " ";
    }
    cout << endl;
}