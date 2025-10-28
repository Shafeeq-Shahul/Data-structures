#include <iostream>
using namespace std;


// structure of the node
struct Node {
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
    }
};

/*

Stack data structure - follows Last In First Out principle.

*/

class Stack {

    private :

    Node* top;

    public :

    Stack() {
        this->top = nullptr;
    }

    // check if its empty
    bool is_empty() {
        return top == nullptr;
    }

    // push() - push elements into the stack
    void push(int new_data) {
        Node* new_node = new Node(new_data);
        new_node->next = top;
        top = new_node;
        cout << "Pushed element : " << new_data << endl;
    }

    // pop() - pop(delete) the top element from the stack
    void pop() {
        if (is_empty()) {
            cout << "Stack underflow." << endl;
            return;
        }
        Node* temp = top;
        int pop_value = top->data;
        cout << "Popped value : " << pop_value << endl;
        top = top->next;
        delete temp;
    }

    // peek() - returns the top element of the stack.
    void peek() {
        if (is_empty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        int peek_value = top->data;
        cout << "Peek value : " << peek_value << endl;
    }

    // returns the size of the stack
    int size() {
        int count = 0;
        if (is_empty()) {
            return 0;
        }
        Node* current_node = top;
        while (current_node != nullptr) {
            current_node = current_node->next;
            count++;
        }
        return count;
    }

    // clear(delete) all elements in the stack
    void clear() {
        top = nullptr;
    }

    void display() {
        Node* current_node = top;
        while (current_node != nullptr) {
            cout << current_node->data << " ";
            // move current_node pointer
            current_node = current_node->next;
        }
        cout << endl;
    }
};