/*27 A) Implement Static implementation of circular queue of integers with following
operation:- Initialize(),insert(), delete(), isempty(), isfull(), display()*/

#define MAX_SIZE 5

int queue[MAX_SIZE];
int front = -1, rear = -1;

// Initialize the queue
void Initialize() {
    front = -1;
    rear = -1;
}

// Insert an element into the queue
void insert(int data) {
    if((front == 0 && rear == MAX_SIZE-1) || (front == rear+1)) {
        printf("Queue is full\n");
        return;
    }
    else if(front == -1) {
        front = rear = 0;
    }
    else if(rear == MAX_SIZE-1 && front != 0) {
        rear = 0;
    }
    else {
        rear++;
    }
    queue[rear] = data;
}

// Delete an element from the queue
void delete() {
    if(front == -1) {
        printf("Queue is empty\n");
        return;
    }
    int data = queue[front];
    if(front == rear) {
        front = -1;
        rear = -1;
    }
    else if(front == MAX_SIZE-1) {
        front = 0;
    }
    else {
        front++;
    }
    printf("Deleted element: %d\n", data);
}

// Check if the queue is empty
int isempty() {
    if(front == -1) {
        return 1;
    }
    return 0;
}

// Check if the queue is full
int isfull() {
    if((front == 0 && rear == MAX_SIZE-1) || (front == rear+1)) {
        return 1;
    }
    return 0;
}

// Display the elements of the queue
void display() {
    if(front == -1) {
        printf("Queue is empty\n");
        return;
    }
    if(rear >= front) {
        for(int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
    }
    else {
        for(int i = front; i < MAX_SIZE; i++) {
            printf("%d ", queue[i]);
        }
        for(int i = 0; i <= rear; i++) {
        	        printf("%d ", queue[i]);
        }
    }
    printf("\n");
}

int main() {
    Initialize();

    insert(1);
    insert(2);
    insert(3);

    display();

    delete();
    delete();

    display();

    insert(4);
    insert(5);
    insert(6);

    display();

    if(isempty()) {
        printf("Queue is empty\n");
    }
    else {
        printf("Queue is not empty\n");
    }

    if(isfull()) {
        printf("Queue is full\n");
    }
    else {
        printf("Queue is not full\n");
    }

    return 0;
}

           

