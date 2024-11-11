#include<stdio.h>
int partition(int A[],int low,int high);
void quicksort(int A[],int low,int high);
int main(){
    int i,n,A[50];
    printf("\nenter the size of array");
    scanf("%d",&n);
    printf("\nenter the elements of array");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
     printf("\nthe  array is:");
    for(i=0;i<n;i++){
        printf("\t%d",A[i]);
      }
    quicksort(A,0,n-1);
    printf("\nthe sorted array is:");
    for(i=0;i<n;i++){
        printf("\t%d",A[i]);
    }
}
void quicksort(int A[],int low,int high){
    int j;
    if(low<high){
         j=partition(A,low,high);
         quicksort(A,low,j-1);
         quicksort(A,j+1,high);

    }
}
int partition(int A[],int low,int high){
    int i=low;
    int j=high;
    int pivot=low;
    int temp;
    while(i<j){
        while(A[i]<=A[pivot]){
            i++;
        }
        while(A[j]>A[pivot]){
           j--;
        }
         if(i<j){
             temp=A[i];
             A[i]=A[j];
             A[j]=temp;
         }
    }
    temp=A[pivot];
    A[pivot]=A[j];
    A[j]=temp;
    return j;
}
