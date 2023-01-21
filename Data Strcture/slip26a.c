/* A) Write a ‘C’ program to accept an infix expression, convert it into its equivalent
prefix expression and display the result. (Use Static Implementation of Stack). */

#include<stdio.h>
#include<ctype.h>
#include<string.h>

#define MAX_SIZE 100

char stack[MAX_SIZE];
int top = -1;

void push(char x)
{
    if(top == MAX_SIZE-1)
    {
        printf("Stack overflow");
    }
    else
    {
        stack[++top] = x;
    }
}

char pop()
{
    if(top == -1)
    {
        printf("Stack underflow");
        return -1;
    }
    else
    {
        return stack[top--];
    }
}

int precedence(char x)
{
    if(x == '+' || x == '-')
    {
        return 1;
    }
    else if(x == '*' || x == '/')
    {
        return 2;
    }
    else if(x == '^')
    {
        return 3;
    }
    else
    {
        return -1;
    }
}

void infix_to_prefix(char infix[], char prefix[], int size)
{
	int i, j = 0, k;
    char x;
    for (i = size - 1; i >= 0; i--)
    {
        if (isalpha(infix[i]) || isdigit(infix[i]))
        {
            prefix[j++] = infix[i];
        }
        else if (infix[i] == ')')
        {
            push(infix[i]);
        }
        else if (infix[i] == '(')
        {
            while ((x = pop()) != ')')
            {
                prefix[j++] = x;
            }
        }
        else
        {
            while (precedence(stack[top]) > precedence(infix[i]))
            {
                prefix[j++] = pop();
            }
            push(infix[i]);
        }
    }
    while (top != -1)
    {
        prefix[j++] = pop();
    }
    prefix[j] = '\0';
    for (i = 0, k = strlen(prefix) - 1; i < k; i++, k--)
    {
        x = prefix[i];
        prefix[i] = prefix[k];
        prefix[k] = x;
    }
    printf("\nThe prefix expression is: %s", prefix);
}

int main()
{
    char infix[MAX_SIZE], prefix[MAX_SIZE];
    printf("Enter the infix expression: ");
    scanf("%s", infix);
    int n = strlen(infix);
    infix_to_prefix(infix, prefix, n);
    return 0;
}

