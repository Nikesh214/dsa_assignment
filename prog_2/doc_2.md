## Program Documentation: Infix to Postfix Conversion and Evaluation
### Purpose of the Program

This program converts a mathematical infix expression (like 2*(3+4)) to a postfix expression (like 234+*) and then evaluates the result using stacks. It supports single-digit operands and operators +, -, *, /, along with parentheses ().

### Data Structures Defined

Character Stack for Operators

### char stack[MAX];
### int top = -1;


stack is an array that stores operators and parentheses during the infix-to-postfix conversion.

top keeps track of the index of the top element of the stack.

An empty stack is indicated by top = -1.

Integer Stack for Postfix Evaluation

### int stackVal[MAX], topVal=-1;


stackVal stores intermediate numeric results during postfix evaluation.

topVal is the index of the top element in the evaluation stack.

## Function Descriptions

### push(char c)
### void push(char c)


Purpose: Push an operator or parenthesis onto the operator stack.

Operation: Increment top and store c in stack[top].

### pop()

### char pop()


Purpose: Remove and return the top element from the operator stack.

Return: Returns '\0' if stack is empty.

### peek()

### char peek()


Purpose: Return the top element without removing it.

Return: Returns '\0' if stack is empty.

precedence(char op)

int precedence(char op)


Purpose: Returns precedence level of an operator.

+ and - have precedence 1, * and / have precedence 2.

### isOperator(char c)

### int isOperator(char c)


Purpose: Checks if c is one of the operators: +, -, *, /.

Return: 1 if operator, 0 otherwise.

infixToPostfix(char infix[], char postfix[])

void infixToPostfix(char infix[], char postfix[])


Purpose: Converts an infix expression to postfix.

### Logic:

Traverse the infix expression character by character.

If a digit, append it to postfix.

If (, push to stack.

If ), pop from stack until ( is found.

If an operator, pop from stack while operator at top has higher or equal precedence, then push current operator.

At the end, pop remaining operators from stack.

#### evaluatePostfix(char postfix[])

### int evaluatePostfix(char postfix[])


Purpose: Evaluates a postfix expression and returns the numeric result.

### Logic:

Traverse postfix character by character.

If a digit, push it to evaluation stack.

If an operator, pop two values, apply the operator, and push result back.

At the end, the top of the stack contains the final result.

## Overview of main() Method

Declares infix and postfix arrays.

Reads a single-digit infix expression from the user.

Resets operator stack (top = -1).

Calls infixToPostfix() to convert the expression.

Prints the resulting postfix expression.

Calls evaluatePostfix() to compute the result.

Prints the evaluation result.

## Sample Output
Enter infix expression (single-digit operands only): 2*(3+4)

Postfix Expression: 234+*
Evaluation Result: 14

Enter infix expression (single-digit operands only): (8+2)/5

Postfix Expression: 82+5/
Evaluation Result: 2

## Conclusion

The program demonstrates how stacks can be used for both infix-to-postfix conversion and postfix evaluation.

The operator stack manages precedence and parentheses.

The evaluation stack computes numeric results efficiently.

This approach can be extended to handle multi-digit numbers or additional operators, showing the versatility of stacks in expression parsing and evaluation.