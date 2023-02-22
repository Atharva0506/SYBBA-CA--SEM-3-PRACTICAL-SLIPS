// A) Write a program to accept a postfix expression and evaluate the expression using
// the stack.
// Example: Input: ab+cd-*
// Values: a=4, b=2, c=5, d=3
// Answer: 12

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int item) {
    if (top >= MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = item;
}

int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

int evaluate(char expression[]) {
    int i, op1, op2, result;
    char ch;
    for (i = 0; i < strlen(expression); i++) {
        ch = expression[i];
        if (isdigit(ch)) {
            push(ch - '0');
        } else {
            op2 = pop();
            op1 = pop();
            switch (ch) {
                case '+':
                    result = op1 + op2;
                    break;
                case '-':
                    result = op1 - op2;
                    break;
                case '*':
                    result = op1 * op2;
                    break;
                case '/':
                    result = op1 / op2;
                    break;
                case '%':
                    result = op1 % op2;
                    break;
            }
            push(result);
        }
    }
    return pop();
}

int main() {
    char expression[MAX_SIZE];
    printf("Enter the postfix expression: ");
    scanf("%s", expression);
    printf("Result: %d\n", evaluate(expression));
    return 0;
}
