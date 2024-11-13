#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;  //data part
    struct node* next;  //pointer to next node
};
struct node* head=NULL;
int insertAtfront(int data){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
         printf("\nmemory allocation failed!");
         return 0;
    }
    newnode->data=data;
    newnode->next=head;
    head=newnode;
    return 1;
}
int insertAtend(int data){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
     if(newnode==NULL){
         printf("\nmemory allocation failed!");
         return 0;
    }
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
        return 1;
    }
    struct node*temp=head; 
    while(temp->next!=NULL)       
    {       
       temp=temp->next;
    }
    temp->next=newnode;           
    return 1;
}
int insertAfter(int nextto,int data){
       struct node* prev=head;
       while(prev->next!=NULL&&prev->data!=nextto)
       {
         prev=prev->next;         
       }
       if(prev->data!=nextto){
          printf("element not found");
          return 0;
       }
       struct node* newnode=(struct node*)malloc(sizeof(struct node));
       newnode->data=data;
       newnode->next=prev->next;
       prev->next=newnode;
       return 1;

}
int deleteAtfront(){
    if(head==NULL){
        printf("\nlist is empty");
        return 0;

    }
    struct node*temp=head;  
    head=head->next;       
    printf("\ndeleted node is %d",temp->data);
    free(temp);            
    return 1;

}
int deleteAtend(){
    if(head==NULL){
        printf("\nlist is empty");    //list empty case
        return 0;
        

    }
    if(head->next==NULL){                         //if one element exist
        printf("\ndeleted item is %d",head->data);
        free(head);
        head=NULL;
        return 1;
        
    }
    struct node* ptr=head;                 //more than 1 element
    struct node* curr=head->next;
    while(curr->next!=NULL){
        ptr=curr;
        curr=curr->next;
    }
    printf("\ndeleted item is %d",curr->data);
       ptr->next=NULL;
       free(curr);
    return 1;
}
int deleteanode(int key){
    if(head==NULL){                            //list is empty
        printf("\nlist is empty ");
        return 0;
    }
    if(head->data==key){                          //if search data is first node
        struct node*temp=head;
        printf("\ndeleted element is %d",temp->data); 
      head=head->next;
        free(temp);
        return 1;
  }
    struct node* prev=head;
    struct node* curr=head;
    while(curr->data!=key&&curr->next!=NULL){           //all other cases
          prev=curr;
          curr=curr->next;
    }
    if(curr->data!=key){
        printf("\nelement not found\n");
        return 0;
    }
    prev->next=curr->next;
    printf("\ndeleted element is %d",curr->data);
    free(curr);
    return 1;
    
}
int display(){
    struct node* temp=head;
    if (head==NULL){
        printf("list is empty:");
        return 0;
    }
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
int main(){
    int temp,temp1,choice,key;
    while(1){
        printf("\n1.insertAtfront\n2.insertAtend\n3.insertAfter\n4.deleteAtfront\n5.deleteAtend\n6.deleteanode\n7.display\n8.exit");
        printf("\nenter your choice(1-8)");
        scanf("%d",&choice);
        switch(choice){
            case 1:
               printf("\nenter a value");
               scanf("%d",&temp);
               insertAtfront(temp);
               printf("LIST IS:");
               display();
               break;
            case 2:
               printf("\nenter a value");
               scanf("%d",&temp);
               insertAtend(temp);
               printf("LIST IS:");
               display();
               break;
            case 3:
               printf("\nenter a value");
               scanf("%d",&temp);
               printf("\nenter value to insert after");
               scanf("%d",&temp1);
               insertAfter(temp1,temp);
               printf("\nLIST IS:");
               display();
               break;
            case 4:
                deleteAtfront();
                printf("\nlist is:");
                display();
                break;
            case 5:
                deleteAtend();
                printf("\nlist is:");
                display();
                break;
            case 6:
                printf("\nenter the value to delete");
                scanf("%d",&temp);
                deleteanode(temp);
                printf("\nlist is :");
                display();
                break;
            case 7:
                printf("\nlist is :");
                display();
                break;
            case 8:
                printf("\\nexiting...");
                return 0;
            default:
                printf("\ninvalid choice");
                break;
                
          }
    }
}
