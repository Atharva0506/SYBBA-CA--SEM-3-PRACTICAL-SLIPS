/*24 A) Write a ‘C’ program to read a postfix expression, evaluate it and display the result. 
(Use Dynamic Implementation of Stack)*/

// Write a 'C' program to read a postfix expression, evaluate it and display the result. (Use Static Implementation of Stack).


#include <stdio.h>  
#include <stdlib.h>
#include <ctype.h>

struct Node {  
    int data;  
    struct Node* next;  
};  

struct Node* top = NULL; 

void push(int x) {  
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));  
    newNode->data = x;  
    newNode->next = top;  
    top = newNode;  
}  

int pop() {  
    if(top == NULL) {  
        printf("stack underflow");  
        return -1;  
    }  
    else {  
        int x = top->data;  
        top = top->next;  
        return x;  
    }  
}  

int evaluatePostfix(char* exp) {  
    int i, x1, x2, x;  
    for(i = 0; exp[i]; i++) {  
        if(isdigit(exp[i])) {  
            push(exp[i] - '0');  
        }  
        else {  
            x2 = pop();  
            x1 = pop();  
            switch(exp[i]) {  
                case '+': x = x1 + x2; break;  
                case '-': x = x1 - x2; break;  
                case '*': x = x1 * x2; break;  
                case '/': x = x1 / x2; break;  
            }  
            push(x);  
        }  
    }  
    return pop();  
}  

int main() {  
    char exp[100];
    printf("Enter the postfix expression: ");
    scanf("%s",exp);
    printf("Evaluated result of postfix expression: %d",evaluatePostfix(exp));  
    return 0;  
}

