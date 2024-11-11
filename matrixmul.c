#include<stdio.h>
int main(){
    int a[100][100],b[100][100],c[100][100],i,j,k,c1,r1,c2,r2;
    printf("\nenter the row and column of first and second matrix\n");
    scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
    printf("\nenter the elements of first matrix ");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
        scanf("%d",&a[i][j]);
    }}
    printf("\nenter the elements of second matrix ");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
        scanf("%d",&b[i][j]);
    }}
    printf("\nthe matrix A is:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
        printf("\t%d",a[i][j]);
    }
    printf("\n");
    }
     printf("\nthe matrix  B is:\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
        printf("\t%d",b[i][j]);
    }
    printf("\n");
    }
    if(c1!=r2){
      printf("\nmulptiplication not possible");
    }
    else{
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++){
                c[i][j]=0;
                for(k=0;k<c1;k++){
                    c[i][j]+=a[i][k]*b[k][j];                }
            }
        }
    }
    printf("\nthe resultant matrix c is \n");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
        printf("\t%d",c[i][j]);
    }
    printf("\n");
    }

    
}
