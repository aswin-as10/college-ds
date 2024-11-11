#include<stdio.h>
int main(){
    int a[100][100],s[100][100],i,j,r,c,nz,z,k=0;
    printf("\nenter the row and column of matrix");
    scanf("%d%d",&r,&c);
    printf("enter the elements of matrix");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    } 
    printf("\nthe matrix is:\n");
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    } 
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(a[i][j]!=0){
                nz++;
            }
            else{
                z++;
            }
        }
    } 
    if(z>nz){
        s[0][0]=r;
        s[k][1]=c;
        s[k][2]=nz;
        k++;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
           if(a[i][j]!=0){
                s[k][0]=i;
                s[k][1]=j;
                s[k][2]=a[i][j];
                k++;
           }
        
        }
     }
    } 
    else{
        printf("\nnot a sparse");
    }
    printf("\nthe sparse matrix is :\n");
     for(i=0;i<k;i++){
        for(j=0;j<3;j++){
            printf("\t%d",s[i][j]);
        }
        printf("\n");
    } 
    
}
