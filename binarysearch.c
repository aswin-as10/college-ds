#include<stdio.h>
int main(){
    int temp,i,j,n,A[50];
    printf("\nenter the size of array");
    scanf("%d",&n);
    printf("\nenter the elements:");
    for(i=0;i<n;i++)
      {
        scanf("%d",&A[i]);
      }
    printf("\nthe  array is:");
    for(i=0;i<n;i++){
        printf("\t%d",A[i]);
      }
    for(i=0;i<n-1;i++)
       {
         for(j=i+1;j<n;j++)
           {
             if(A[j]<A[i])
               {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
               }
           }
       }
    printf("\nthe sorted array is:");
    for(i=0;i<n;i++){
        printf("\t%d",A[i]);
      }
    int key,mid,flag=0;
    printf("\nenter the element to search");
    scanf("%d",&key);
    int low=0,upper=n-1;
    while(low<=upper){
        mid=(low+upper)/2;
        if(A[mid]==key){
              flag=1;
              break;
        }
        else if(A[mid]>key){
            upper=mid-1;
        }
        else{
            low=mid+1;
        } }
        if(flag==1){
            printf("search element found");
        }
        else
        {
            printf("search element not found");
        }
}
