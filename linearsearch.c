#include<stdio.h>
int main(){
    int temp,i,j,key,n,A[50];
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
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
                if(A[j]>A[j+1]){
                    temp=A[j];
                    A[j]=A[j+1];
                    A[j+1]=temp;
                }
        }
    }
    printf("\nthe  sorted array is:[");
    for(i=0;i<n;i++){
        printf("\t%d",A[i]);
    }
    printf("]");
    printf("\nenter element to search");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(A[i]==key){
            flag=1;
            break;
        }
        
    }
    if(flag==1){
        printf("\nelement found at pos %d",i+1);
    }
    else{
        printf("\element not found");
    }
}
