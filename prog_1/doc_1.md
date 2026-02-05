## Program Documentation: Balanced Parentheses Checker in C
## Purpose of the Program

This program checks whether a given mathematical expression has balanced parentheses, including (), {}, and []. It uses a stack data structure to store opening brackets and matches them with closing brackets as the expression is processed.

## Data Structures Defined

### Stack:
Implemented as a character array:

char stack[MAX];

MAX is the maximum size of the stack (#define MAX 100).

### Top pointer:

int top = -1;

Keeps track of the index of the top element in the stack.

top = -1 indicates an empty stack.

## Function Descriptions

### push(char c)

### void push(char c)


Purpose: Adds an opening bracket to the top of the stack.

Input: Character c representing (, {, or [.

Operation: Increment top and store c at stack[top].


### pop()

### char pop()


Purpose: Removes and returns the top element of the stack.

Return: The top character if the stack is not empty, otherwise '\0'.

Operation: Decrements top.

### isMatchingPair(char opening, char closing)

### int isMatchingPair(char opening, char closing)


Purpose: Checks whether the given opening and closing brackets form a valid pair.

Return: 1 if matched, 0 otherwise.

Logic: Uses conditional checks for (), {}, [].

### isBalanced(char expression[])

### int isBalanced(char expression[])


Purpose: Checks if an expression has balanced parentheses.

Logic:

Traverse the expression character by character.

Push opening brackets onto the stack.

For closing brackets, pop the stack and check with isMatchingPair().

At the end, if the stack is empty, the expression is balanced.

Return: 1 if balanced, 0 otherwise.

## Overview of main() Method

### Step 1: Define a list of expressions to check:

char expressions[][100] = { "a + (b - c) * (d", "m + [a - b * (c + d * {m)]", "a + (b - c)" };


### Step 2: Loop through each expression:

Reset top to -1 for each new expression.

Print the expression.

Call isBalanced() to check if balanced.

Print the result: "Balanced" or "Not Balanced".

## Sample Output
Expression: a + (b - c) * (d

Result: Not Balanced

Expression: m + [a - b * (c + d * {m)]

Result: Not Balanced

Expression: a + (b - c)

Result: Balanced

## Conclusion

The program successfully demonstrates how a stack data structure can be used to check for balanced parentheses in mathematical expressions. By systematically pushing opening brackets and popping them when matching closing brackets are encountered, the program ensures that all types of brackets—(), {}, and []—are correctly matched and nested.

This approach highlights the importance of stacks in handling problems involving last-in-first-out (LIFO) operations, such as expression parsing and syntax checking in compilers. The program is efficient, easy to understand, and can be extended to handle more complex expressions or additional types of delimiters.

### Key Takeaways:

Stacks are ideal for matching nested structures.

Each function in the program has a clear, specific role.

Resetting the stack for each new expression ensures accurate independent checking.