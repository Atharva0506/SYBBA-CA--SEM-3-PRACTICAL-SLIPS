/*A) Write a ‘C’ program which accept the string and check whether the string is
Palindrome or not using stack. (Use Static/Dynamic implementation of Stack)*/

#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

char stack[MAX_SIZE];
int top = -1;

void push(char item) {
    if (top == MAX_SIZE - 1) {
        printf("Error: Stack overflow\n");
        return;
    }
    stack[++top] = item;
}

char pop() {
    if (top == -1) {
        printf("Error: Stack underflow\n");
        return -1;
    }
    return stack[top--];
}

int isPalindrome(char* str) {
    int i, length = strlen(str);
    for (i = 0; i < length; i++) {
        push(str[i]);
    }
    for (i = 0; i < length; i++) {
        if (str[i] != pop()) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str[MAX_SIZE];
    printf("Enter a string: ");
    scanf("%s", str);
    if (isPalindrome(str)) {
        printf("The string is a palindrome\n");
    } else {
        printf("The string is not a palindrome\n");
    }
    return 0;
}

