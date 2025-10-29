# Data-structures
Data Structures and algorithms and its implementations with visualisation

## Linked List

* Linked list allows for continous memory allocation using node.
* A node consist of data part and pointer part which point to the next variable.
* It overcomes the array fixed size limitation.
* It used for construction other data structures like stack and queues.

  ```
  struct Node {
      int data;
      Node* next;
      Node(int data) {
          this->data = data;
          this->next = nullptr;
      }
  };

  
![list](https://github.com/user-attachments/assets/2d7a6696-fd8c-4353-8a3e-12c94d65f021)


## Stack

### Stack is a data structure that follows Last In First Out(LIFO) principle.

* push() - push the data into the stack.
* pop() - pop out the top element of the stack.
* peek() - returns the top element of the stack.

#### Visual Representation

![stack](https://github.com/user-attachments/assets/f23689d1-8136-4cba-b87d-bf7159f9ae49)

## Queue

### Queue is a data structure that follows First In First Out(FIFO) principle.

* enqueue() - insert the element to rear part of the Queue.
* dequeue() - removes the front element of the Queue.
* peek() - returns the front element of the Queue.

  #### Visual Representation

  ![queue](https://github.com/user-attachments/assets/e623f49c-f949-4cf7-bbb9-a9abe08c757c)
