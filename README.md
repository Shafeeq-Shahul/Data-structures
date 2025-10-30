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

## Sorting Algorithms

### Bubble Sort

- Start from the first element of the array.
- Compare the current element with the next one.
- Swap them if the current element is greater than the next.
- Move to the next pair and repeat steps 2–3 until the end of the array.
- Repeat the entire process for all elements, reducing the range each time (since the largest elements settle at the end).
- Stop when no swaps are needed in a full pass — the array is sorted.

![bubble](https://github.com/user-attachments/assets/4def8fa8-7bb6-4bbd-bac8-ee81a48f3598)


### Selection Sort

- Start with the first element of the array.
- Search for the smallest element in the entire unsorted portion.
- Swap the smallest element with the first unsorted element.
- Move to the next position and repeat steps 2–3.
- Continue until the entire array is sorted.

![selection](https://github.com/user-attachments/assets/68503fa5-bfc0-4d4b-8b78-ead73834619f)

### Insertion Sort

- Start from the second element (index 1) of the array.
- Compare it with the elements before it (to its left).
- Shift larger elements one position to the right to make space.
- Insert the current element into its correct position.
- Repeat for all elements until the array is sorted.

![insertion](https://github.com/user-attachments/assets/fb1fc7ed-7fff-4e4b-9cff-42686ccdb4aa)
