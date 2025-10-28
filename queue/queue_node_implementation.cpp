#include <iostream>
using namespace std;

// structure of the node

struct Node {
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class Queue {

    private :

    // front part of the queue
    Node* front;

    // rear part of the queue
    Node* rear;

    public :

    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    bool is_empty() {
        return front == nullptr;
    }

    // add element to the rear of the queue
    void enqueue(int new_data) {
        Node* new_node = new Node(new_data);
        if (front == nullptr && rear == nullptr) {
            front = rear = new_node;
            return;
        }
        rear->next = new_node;
        rear = new_node;
        cout << "Enqueued element : " << new_data << endl;
    }

    void dequeue() {
        if (is_empty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        Node* temp = front;
        int dequeue_val = temp->data;
        front = front->next;
        delete temp;
        // if the last element is dequeued then make queue is empty
        if (front == nullptr) {
            rear = nullptr;
        }
        cout << "Dequeued element : " << dequeue_val << endl;   
    }

    // prints the front element in the queue
    void peek() {
        if (is_empty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        int peek_val = front->data;
        cout << "Peeked value : " << peek_val << endl;
    }

    void clear() {
        while (front != nullptr) {
            Node* temp = front;
            front = front->next;
            delete temp;
        }
        rear = nullptr; // resets the rear
    }

    // to find the size of the queue.
    int size() {
        int count = 0;
        Node* current_node = front;
        while (current_node != nullptr) {
            current_node = current_node->next;
            count++;
        }
        return count;
    }

    void display() {
        if (is_empty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        Node* current_node = front;
        while (current_node != nullptr) {
            cout << current_node->data << " ";
            current_node = current_node->next;
        }
        cout << endl;
    }

};
