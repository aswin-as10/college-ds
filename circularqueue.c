#include<stdio.h>
int main()
  {
    int value,size,ch,i;
    int front=-1,rear=-1;
    printf("\nenter the size");
    scanf("%d",&size);
    int A[size];
    while(1)
     {
        printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit");
        printf("\nenter the choice(1-4)");
        scanf("%d",&ch);
        switch(ch)
         {
            case 1:
             if(front==-1)
              {
                front=0;
                printf("\nenter the value to insert");
                scanf("%d",&value);
                rear++;
                A[rear]=value;
                printf("\ninserted value is %d",value);
              }
            else if((rear+1)%size==front)
              {
             printf("\nqueue is full");
               }
            else 
              {
                printf("\nenter the value to insert");
                scanf("%d",&value);
                 rear=(rear+1)%size;
                 A[rear]=value;
                 printf("\ninserted value is %d",value);
              }
            break;
            case 2:
              if(front==-1)
                {
                    printf("\nunderflow");w
                    
                }
              else if(front==rear)
               {
                value=A[front];
                front=-1;
                rear=-1;
                printf("\ndeleted value is %d",value);
               }
              else 
                {
                    value=A[front];
                    front=(front+1)%size;
                    printf("\ndeleted value is %d",value);
                }
            break;
            case 3:
              if(front==-1)
                {
                    printf("the queue is empty");
                }
               else
                 {   
                 for(i=front;i!=rear;i=(i+1)%size)
                   {
                     printf("\t%d",A[i]);
                  }     
                  printf("\t%d",A[rear]);  
                    
                 
                 }
              break;
            case 4:
                printf("program ended");
                return 0;
            default :
               printf("inavalid choice");
               
         }
     }
  }
