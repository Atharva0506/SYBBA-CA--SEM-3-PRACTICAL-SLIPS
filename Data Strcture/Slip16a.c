//  Write a ‘C’ program which accept the string and reverse each word of the string
// using Static implementation of stack.
// Example: Input - This is an input string
// Output - sihTsinatupnignirts

#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

char stack[MAX_SIZE];
int top = -1;

void push(char item) {
    if (top >= MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = item;
}

char pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

void reverseWord(char *word) {
    int i;
    for (i = 0; i < strlen(word); i++) {
        push(word[i]);
    }
    for (i = 0; i < strlen(word); i++) {
        word[i] = pop();
    }
}

void reverseString(char *str) {
    int i, j, k;
    for (i = 0, j = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            k = i - 1;
            while (j < k) {
                char temp = str[j];
                str[j] = str[k];
                str[k] = temp;
                j++;
                k--;
            }
            j = i + 1;
        }
    }
    k = i - 1;
    while (j < k) {
        char temp = str[j];
        str[j] = str[k];
        str[k] = temp;
        j++;
        k--;
    }
}

int main() {
    char str[MAX_SIZE];
    printf("Enter the string: ");
    scanf("%[^\n]s", str);
    reverseString(str);
    printf("Reversed string: %s\n", str);
    return 0;
}
