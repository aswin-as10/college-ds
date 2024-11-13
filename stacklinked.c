#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* link;
};
struct node* top=NULL;
int push(int item){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("memory allocation failed");
        return 0;
    }
   newnode->data=item;
   newnode->link=top;
   top=newnode;
   printf("\nthe pushed value is %d",newnode->data);
  return 1;
}
int pop(){
    if(top==NULL){
        printf("\nstack underflow");
        return 1;
    }
    struct node*temp=top;
    top=top->link;
    printf("popped value is %d",temp->data );
    free(temp);
}
int display(){
    if(top==NULL){
        printf("stack is empty");
    }
    struct node*temp=top;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->link;
    }
    printf("NULL\n");
}
 int main() {
    int choice, value;
    
    while (1) {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to push: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
 }
    

