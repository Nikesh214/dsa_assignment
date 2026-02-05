## Program Documentation: Reverse Traversal of a Linked List
### Purpose of the Program

This program demonstrates how to traverse a singly linked list in reverse order using recursion. It creates a linked list, inserts nodes at the end, and prints the list elements in reverse without modifying the original list.

### Data Structures Defined

## Node Structure

struct Node {

    int data;

    struct Node*
     next;
};

data: Stores the integer value of the node.

next: Pointer to the next node in the list.

Each node is dynamically allocated using malloc.

Linked List Head

struct Node* head = NULL;


head points to the first node of the list.

NULL indicates the list is initially empty.

### Function Descriptions

### createNode(int data)

### struct Node* createNode(int data)


Purpose: Allocates memory for a new node, initializes its data, and sets next to NULL.

Return: Pointer to the newly created node.

### insertEnd(struct Node head, int data)**

### void insertEnd(struct Node** head, int data)


Purpose: Inserts a new node at the end of the linked list.

### Logic:

If the list is empty (*head == NULL), the new node becomes the head.

Otherwise, traverse to the last node and link the new node at the end.

### reverseTraversal(struct Node head)*

### void reverseTraversal(struct Node* head)


Purpose: Prints the elements of the linked list in reverse order.

### Logic:

If head is NULL, return (base case).

Recursively call reverseTraversal on the next node.

Print head->data after the recursive call, achieving reverse order output.

## Overview of main() Method

Initializes head as NULL.

Inserts four nodes with values 10, 20, 30, 40 using insertEnd().

Calls reverseTraversal() to print the linked list in reverse order.

Prints a newline for clean output.

## Sample Output
Linked list in reverse: 40 30 20 10

## Conclusion

The program demonstrates reverse traversal of a singly linked list using recursion, without altering the list structure.

The linked list uses dynamic memory allocation.

Recursive function enables printing in reverse order efficiently.

This approach can be extended to linked lists of any size and can be modified to perform other operations during reverse traversal, like summing elements or freeing nodes.