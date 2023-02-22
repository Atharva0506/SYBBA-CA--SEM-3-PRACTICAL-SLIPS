//  Write a ‘C’ program to accept a string from user and reverse it using Dynamic
// implementation of Stack.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

struct Stack {
    int top;
    char data[MAX_SIZE];
};

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

void reverseString(char *str) {
    struct Stack s;
    s.top = -1;
    int i;
    for (i = 0; i < strlen(str); i++) {
        push(&s, str[i]);
    }
    for (i = 0; i < strlen(str); i++) {
        str[i] = pop(&s);
    }
}

int main() {
    char str[MAX_SIZE];
    printf("Enter the string: ");
    scanf("%s", str);
    reverseString(str);
    printf("Reversed string: %s\n", str);
    return 0;
}
