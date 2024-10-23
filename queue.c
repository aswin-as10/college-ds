#include <stdio.h>

int main() {
    int front = -1;             
    int rear = -1;             
    int size, choice, value, i;

    printf("Enter the size of the queue: ");
    scanf("%d", &size);
    int queue[size];

    while (1) {
      
        printf("\nQueue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (rear == size - 1) {
                    printf("Queue Overflow!\n");
                } else {
                    if (front == -1) {
                        front = 0; 
                    }
                    printf("Enter value to enqueue: ");
                    scanf("%d", &value);
                    rear++; 
                    queue[rear] = value;
                    printf("Enqueued %d into the queue.\n", value);
                }
                break;

            case 2: // Dequeue
                if (front == -1) {
                    printf("Queue Underflow!\n");
                } else { 
                    value = queue[front++]; 
                    printf("Dequeued %d from the queue.\n", value);
                    if (front > rear) { 
                        front = -1; 
                        rear = -1;
                    }
                }
                break;

            case 3: // Display
                if (front == -1) {
                    printf("Queue is empty!\n");
                } else {
                    printf("Queue elements:\n");
                    for (i = front; i <= rear; i++) {
                        printf("\t%d", queue[i]);
                    }
                    printf("\n"); 
                }
                break;

            case 4: // Exit
                printf("Exiting...\n");
                return 0; // Exit the program

            default:
                printf("Invalid choice! Please enter a number between 1 and 4.\n");
                break;
        }
    }
}
