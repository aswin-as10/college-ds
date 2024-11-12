#include<stdio.h>
#include<stdlib.h>
int enqueue(int item);
int dequeue();
void display();
struct node{
    int data;
    struct node*link;
};
struct node*rear=NULL;
struct node*front=NULL;
int main(){
    int ch;
    while(1){
    printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit");
    printf("\nenter your choice:");
    scanf("%d",&ch);
    switch(ch){
        case 1:
           int value;
           printf("\nenter the value to insert");
           scanf("%d", &value);
           enqueue(value);
           break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
           printf("\nexiting..");
           return 0;
        default:
           printf("\ninvalid character");
       }
    }
}
int enqueue(int item){
     struct node*newnode=(struct node*)malloc(sizeof(struct node));
     if(newnode==NULL){
        printf("\nmemory allocation failed");
        return -1;
     }
     newnode->data=item;
     newnode->link=NULL;
     if(rear==NULL&&front==NULL){
        front=rear=newnode;
     }
     else{
        rear->link=newnode;
        rear=newnode;
     }
     printf("\nenqueued item is %d",item);
     return 1;
}
int dequeue(){
    if(front==NULL){
        printf("\nqueue is empty");
        return -1;
    }
    struct node*ptr=front;
    int temp=front->data;
    front=front->link;
    if(front==NULL){
        front=rear=NULL;
    }
    free(ptr);
    printf("\ndeleted value is %d",temp);
    return 1;

}
void display(){
    if(front==NULL){
        printf("\nqueue is empty");
    }
    struct node*ptr=front;
    printf("\nthe list is:");
    while(ptr!=NULL){
        printf("%d->",ptr->data);
        ptr=ptr->link;
    }
    printf("NULL\n");
}
