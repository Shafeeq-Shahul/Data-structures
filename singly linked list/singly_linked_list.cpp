#include <iostream>
using namespace std;

// structure of the node
struct Node {
    int data;
    Node* next;

    // initialize the data using parameterized constructor
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class Singly_Linked_List {

    private :

    // representation of the head of the node.
    Node* head;

    public :

    Singly_Linked_List() {
        this->head = nullptr;
    }

    bool isEmpty() {
        return head == nullptr;
    }

    void insertAtStart(int new_data) {
        Node* new_node = new Node(new_data);
        new_node->next = head;
        head = new_node;
    }

    void insertAtEnd(int new_data) {
        Node* new_node = new Node(new_data);
        if (isEmpty()) {
            head = new_node;
            return;
        }
        Node* current_node = head;
        while (current_node->next != nullptr) {
            current_node = current_node->next;
        }
        current_node->next = new_node;
    }

    void insertAtIndex(int index, int new_data) {
        Node* new_node = new Node(new_data);
        if (index < 0) {
            cout << "Negative Index not allowed." << endl;
            return;
        }
        if (index == 0) {
            new_node->next = head;
            head = new_node;
            return;
        }
        Node* current = head;
        for (int i = 0; i < index - 1; i++) {
            if (current == nullptr) {
                cout << "Index out of bound." << endl;
                return;
            }
            current = current->next;
        }
        if (current == nullptr) {
            cout << "Index out of bound." << endl;
            return; 
        }
        new_node->next = current->next;
        current->next = new_node;
    }

    void deleteAtStart() {
        if (isEmpty()) {
            cout << "List is empty." << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Node at beginning is deleted." << endl;
    }

    void deleteAtEnd() {
        if (isEmpty()) {
            cout << "List is empty." << endl;
            return;
        }
        // if there is a single node in the list.
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }
        Node* current = head;
        while (current->next->next != nullptr) {
            current = current->next;
        }
        Node* temp = current->next; // node to be deleted
        current->next = nullptr;
        delete temp;
        cout << "Node at end is deleted." << endl;
    }

    void deleteAtIndex(int index) {
        if (isEmpty()) {
            cout << "List is empty." << endl;
            return;
        }
        if (index < 0) {
            cout << "Index out of bound." << endl;
            return;
        }
        if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* current = head;
        int count = 0;
        while (current != nullptr && count < index - 1) {
            current = current->next;
            count++;
        }
        // if the current node or current node next is null it out of bound the index
        if (current == nullptr || current->next == nullptr) {
            cout << "Index out of bound." << endl;
            return;
        }
        Node* temp = current->next;
        current->next = temp->next;
        delete temp;
        cout << "Node at " << index << " is deleted." << endl;
    }

    void getIndex(int index) {
        if (index < 0) {
            cout << "Index out of bound." << endl;
            return;
        }
        if (index == 0) {
            int get = head->data;
            cout << "Get Data at " << index << " is" << get;
            return;
        }
        Node* current = head;
        for (int i = 0; i < index - 1; i++) {
            if (current == nullptr) {
                cout << "Index out of bound." << endl;
                return;
            }
            current = current->next;
        }
        if (current == nullptr) {
            cout << "Index out of bound." << endl;
            return;
        }
        int get = current->data;
        cout << "Get Data at " << index << " is" << get;
    }

    int size() {
        Node* current = head;
        int count = 0;
        while (current != nullptr) {
            current = current->next;
            count++;
        }
        return count;
    }

    void clear() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        cout << "List is deleted." << endl;
    }

    void contains(int key) {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == key) {
                cout << key << " is present in the List." << endl;
                return;
            }
            current = current->next;
        }
        cout << key << " is not present in the List." << endl;
    }

    void display() {
        if (isEmpty()) {
            cout << "List is empty" << endl;
            return;
        }
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << "->";
            current = current->next;
        }
        cout << "END" << endl;
    }

};
