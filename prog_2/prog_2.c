#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) { stack[++top] = c; }
char pop() { if(top==-1) return '\0'; return stack[top--]; }
char peek() { if(top==-1) return '\0'; return stack[top]; }
int precedence(char op) { if(op=='+'||op=='-') return 1; if(op=='*'||op=='/') return 2; return 0; }
int isOperator(char c) { return (c=='+'||c=='-'||c=='*'||c=='/'); }

void infixToPostfix(char infix[], char postfix[]) {
    int i,k=0; char ch;
    for(i=0;i<strlen(infix);i++){
        ch=infix[i];
        if(isdigit(ch)) postfix[k++]=ch;
        else if(ch=='(') push(ch);
        else if(ch==')'){ while(top!=-1 && peek()!='(') postfix[k++]=pop(); pop(); }
        else if(isOperator(ch)){ while(top!=-1 && precedence(peek())>=precedence(ch)) postfix[k++]=pop(); push(ch); }
    }
    while(top!=-1) postfix[k++]=pop();
    postfix[k]='\0';
}

int evaluatePostfix(char postfix[]){
    int stackVal[MAX], topVal=-1,i;
    for(i=0;i<strlen(postfix);i++){
        char ch=postfix[i];
        if(isdigit(ch)) stackVal[++topVal]=ch-'0';
        else{
            int val2=stackVal[topVal--];
            int val1=stackVal[topVal--];
            switch(ch){ case '+': stackVal[++topVal]=val1+val2; break;
                        case '-': stackVal[++topVal]=val1-val2; break;
                        case '*': stackVal[++topVal]=val1*val2; break;
                        case '/': stackVal[++topVal]=val1/val2; break; }
        }
    }
    return stackVal[topVal];
}

int main(){
    char infix[MAX], postfix[MAX];
    printf("Enter infix expression (single-digit operands only): ");
    scanf("%s",infix);
    top=-1;
    infixToPostfix(infix,postfix);
    printf("Postfix Expression: %s\n",postfix);
    int result=evaluatePostfix(postfix);
    printf("Evaluation Result: %d\n",result);
    return 0;
}
