#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) {
    stack[++top] = c;
}

char pop() {
    if (top == -1) return '\0';
    return stack[top--];
}

int isMatchingPair(char opening, char closing) {
    return (opening == '(' && closing == ')') ||
           (opening == '{' && closing == '}') ||
           (opening == '[' && closing == ']');
}

int isBalanced(char expression[]) {
    int i;
    for (i = 0; i < strlen(expression); i++) {
        char ch = expression[i];
        if (ch == '(' || ch == '{' || ch == '[') push(ch);
        else if (ch == ')' || ch == '}' || ch == ']') {
            char popped = pop();
            if (!isMatchingPair(popped, ch)) return 0;
        }
    }
    return top == -1;
}

int main() {
    char expressions[][100] = {
        "a + (b - c) * (d",
        "m + [a - b * (c + d * {m)]",
        "a + (b - c)"
    };
    
    int n = 3;
    for (int i = 0; i < n; i++) {
        top = -1;
        printf("Expression: %s\n", expressions[i]);
        if (isBalanced(expressions[i])) printf("Result: Balanced\n\n");
        else printf("Result: Not Balanced\n\n");
    }
    return 0;
}
