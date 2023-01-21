/* 30 A) Implement Dynamic implementation of circular queue of integers with following
operation:- Initialize(),insert(), delete(), isempty(), isfull(), display() */

#include<stdio.h>

#define MAX_SIZE 10

int queue[MAX_SIZE];
int front = 0;
int rear = 0;

void initialize() {
    front = rear = 0;
}

void insert() {
    if((rear + 1) % MAX_SIZE == front) {
        printf("\nQueue is full!!\n");
    }
    else {
        int data;
        printf("Enter data: ");
        scanf("%d", &data);

        queue[rear] = data;
        rear = (rear + 1) % MAX_SIZE;

        printf("\nData entered successfully!!\n");
    }
}

void del() {
    if(front == rear) {
        printf("\nQueue is empty!!\n");
    }
    else {
        printf("\n%d deleted\n", queue[front]);
        front = (front + 1) % MAX_SIZE;
    }
}

int isempty() {
    return front == rear;
}

int isfull() {
    return (rear + 1) % MAX_SIZE == front;
}

void display() {
    if(front == rear) {
        printf("\nQueue is empty!!\n");
    }
    else {
        printf("\nThe queue elements are: ");
        int i = front;
        while(i != rear) {
            printf("%d\t", queue[i]);
            i = (i + 1) % MAX_SIZE;
        }
        printf("\n");
    }
}

int main() {
    int choice;
    while(1) {
        printf("\n1. Initialize\n");
        printf("2. Insert\n");
        printf("3. Delete\n");
        printf("4. Is Empty\n");
        printf("5. Is Full\n");
        printf("6. Display\n");
        printf("7. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                initialize();
                break;
            case 2:
                insert();
                break;
            case 3:
                del();
                break;
            case 4:
                if(isempty()) {
                    printf("\nQueue is empty\n");
                }
                else {
                    printf("\nQueue is not empty\n");
                }
                break;
            case 5:
                if(isfull()) {
                    printf("\nQueue is full\n");
                }
                else {
                    printf("\nQueue is not full\n");
                }
                break;
            case 6:
                display();
                break;
            case 7:
                exit(0);
            default:
                printf("\nInvalid choice!!\n");
        }
    }
    return 0;
}

