// Write a ‘C’ program to accept an infix expression, convert it into its equivalent
// postfix expression and display the result.(Use Dynamic Implementation of Stack)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

struct Stack {
    int top;
    char data[MAX_SIZE];
};

int priority(char op) {
    if (op == '^') {
        return 3;
    } else if (op == '*' || op == '/') {
        return 2;
    } else if (op == '+' || op == '-') {
        return 1;
    } else {
        return -1;
    }
}

void push(struct Stack *s, char item) {
    if (s->top >= MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }
    s->data[++s->top] = item;
}

char pop(struct Stack *s) {
    if (s->top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return s->data[s->top--];
}

void infixToPostfix(char *infix, char *postfix) {
    struct Stack s;
    int i, j;
    s.top = -1;
    for (i = 0, j = 0; i < strlen(infix); i++) {
        if (isalnum(infix[i])) {
            postfix[j++] = infix[i];
        } else if (infix[i] == '(') {
            push(&s, infix[i]);
        } else if (infix[i] == ')') {
            while (s.data[s.top] != '(') {
                postfix[j++] = pop(&s);
            }
            pop(&s);
        } else {
            while (s.top != -1 && priority(s.data[s.top]) >= priority(infix[i])) {
                postfix[j++] = pop(&s);
            }
            push(&s, infix[i]);
        }
    }
    while (s.top != -1) {
        postfix[j++] = pop(&s);
    }
    postfix[j] = '\0';
}

int main() {
    char infix[MAX_SIZE], postfix[MAX_SIZE];
    printf("Enter the infix expression: ");
    scanf("%s", infix);
    infixToPostfix(infix, postfix);
    printf("Postfix expression: %s\n", postfix);
    return 0;
}
