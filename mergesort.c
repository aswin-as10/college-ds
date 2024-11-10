#include<stdio.h>
#define max 100
int B[max];
void merge(int A[],int low,int mid,int high);
void mergesort(int A[],int low,int high){
     if(low<high){
         int mid=(low+high)/2;
         mergesort(A,low,mid);
         mergesort(A,mid+1,high);
         merge(A,low,mid,high);
     }
}
void merge(int A[],int low,int mid, int high){
           int i=low,j=mid+1,k=low;
           while(i<=mid&&j<=high){
                if(A[i]<A[j]){
                    B[k]=A[i];
                    k++;
                    i++;
                }
                else{
                    B[k]=A[j];
                    j++;
                    k++;
                }
           }
           if(i>mid){
             while(j<=high){
                B[k]=A[j];
                k++;
                j++;
             }
           }
           else{
             while(i<=mid){
                B[k]=A[i];
                k++;
                i++;
             }
           }
        for(i=low;i<=high;i++){
            A[i]=B[i];
        }


}
int main(){
    int i,A[100],n;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    mergesort(A,0,n-1);
    printf("sorted array is:");
    for(i=0;i<n;i++){
        printf("\t%d",A[i]);
    }
    
}
