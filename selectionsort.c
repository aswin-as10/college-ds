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
             if(A[j]<A[i]){
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

}
