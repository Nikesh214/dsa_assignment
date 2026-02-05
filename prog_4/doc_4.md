## Program Documentation: Doubly Linked List with Insert and Delete Operations
### Purpose of the Program

This program demonstrates how to implement a doubly linked list in C using structures. It provides functions to insert a new node after a given node and delete a specific node. The program also prints the list before and after deletion.

### Data Structures Defined

Node Structure

struct Node {

    int data;

    struct Node* prev;

    struct Node* next;

};


data: Stores the integer value of the node.

prev: Pointer to the previous node in the list.

next: Pointer to the next node in the list.

Each node is dynamically allocated using malloc.

## Head Pointer

struct Node* head;


head points to the first node of the list.

NULL indicates the list is initially empty.

### Function Descriptions

### createNode(int data)

### struct Node* createNode(int data)


Purpose: Allocates memory for a new node, sets its data, and initializes prev and next pointers to NULL.

Return: Pointer to the newly created node.

### insertAfter(struct Node prevNode, int data)*

### void insertAfter(struct Node* prevNode, int data)


Purpose: Inserts a new node after a given node in the doubly linked list.

### Logic:

Check if prevNode is NULL.

Create a new node.

Update the new node’s prev and next pointers.

Update surrounding nodes to maintain the doubly linked structure.

## deleteNode(struct Node head, struct Node* delNode)**

## void deleteNode(struct Node** head, struct Node* delNode)


Purpose: Deletes a given node from the doubly linked list.

Logic:

Check if the list or delNode is NULL.

Update head if the node to be deleted is the first node.

Adjust prev and next pointers of neighboring nodes.

Free memory of the deleted node.


### printList(struct Node head)*

### void printList(struct Node* head)


Purpose: Prints all elements of the doubly linked list from head to tail.

## Overview of main() Method

Creates the first node of the list with value 10.

Inserts nodes 20 and 30 using insertAfter().

Prints the list: 10 20 30.

Deletes the second node (20) using deleteNode().

Prints the list after deletion: 10 30.

## Sample Output
Doubly linked list: 10 20 30  

After deletion: 10 30

## Conclusion

The program demonstrates the implementation of a doubly linked list in C using structures and dynamic memory allocation.

insertAfter() allows adding nodes at any position.

deleteNode() removes nodes safely while maintaining links.

This program can be extended to include additional operations like insertion at the beginning, at the end, or searching nodes.