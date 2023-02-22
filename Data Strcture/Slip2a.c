/* Write a 'C' program to accept a string from user and reverse it using Static implementation of Stack */

#include <stdio.h>
#include <string.h>
#define max 20

// Global variables
int top = -1;
char stk[max];

// function declaration
void push(char);
char pop();
main()
{
    char s[20];
    int i;
    printf("enter string: ");
    scanf("%s", s);
    for (i = 0; i < strlen(s); i++)
    {
        push(s[i]);
    }
    for (i = 0; i < strlen(s); i++)
    {
        s[i] = pop();
    }
    printf("reverse string is \n");
    printf("%s", s);
}
void push(char ch)
{
    if (top == max)
    {
        printf("stack overflow");
        return;
    }
    else
        stk[++top] = ch;
}
char pop()
{
    if (top == -1)
    {
        printf("satck empty");
        exit(0);
    }
    else
    {
        return (stk[top--]);
    }
}
