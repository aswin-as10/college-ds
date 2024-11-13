#include <stdio.h>

int main() {
    int poly1[100], poly2[100], deg1, deg2, maxdeg=0, i, sum[100] ;

    // Input degrees
    printf("Enter the degree of first and second polynomial: ");
    scanf("%d%d", &deg1, &deg2);

    // Input coefficients for the first polynomial
    printf("Enter the coefficients of the first polynomial: ");
    for (i = 0; i<=deg1; i++) {
        scanf("%d", &poly1[i]);
    }

    // Input coefficients for the second polynomial
    printf("Enter the coefficients of the second polynomial: ");
    for (i=0;i<=deg2; i++) {
        scanf("%d", &poly2[i]);
    }

    // Display the first polynomial
    printf("First polynomial is: ");
    for (i = deg1; i >= 0; i--) {
 
            printf("%dx^%d", poly1[i], i);
            if (i > 0) {
                printf(" + ");
            }
        
    }
    printf("\n");

    // Display the second polynomial
    printf("Second polynomial is: ");
    for (i = deg2; i >= 0; i--) {
        
            printf("%dx^%d", poly2[i], i);
            if (i > 0) {
                printf(" + ");
            }
        
    }
    printf("\n");

    if(deg1>deg2){
        maxdeg+=deg1;
    }
    else{
        maxdeg+=deg2;
    }
    for(i=0;i<=maxdeg;i++){
        sum[i]=0;
    }
    for(i=0;i<=deg1;i++){
        sum[i]+=poly1[i];
    }
    for(i=0;i<=deg2;i++){
        sum[i]+=poly2[i];
    }
    printf("\nthe result is:");
    for(i=maxdeg;i>=0;i--){
   
        printf("%dx^%d",sum[i],i);
        if(i>0){
            printf("+");
        }
    }
   
}
