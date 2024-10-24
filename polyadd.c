#include <stdio.h>

int main() {
    int poly1[100] = {0}, poly2[100] = {0}, deg1, deg2, maxdeg, i, sumpoly[100] = {0};

    // Input degrees
    printf("Enter the degree of first and second polynomial: ");
    scanf("%d%d", &deg1, &deg2);

    // Input coefficients for the first polynomial
    printf("Enter the coefficients of the first polynomial: ");
    for (i = deg1; i >= 0; i--) {
        scanf("%d", &poly1[i]);
    }

    // Input coefficients for the second polynomial
    printf("Enter the coefficients of the second polynomial: ");
    for (i = deg2; i >= 0; i--) {
        scanf("%d", &poly2[i]);
    }

    // Display the first polynomial
    printf("First polynomial is: ");
    for (i = deg1; i >= 0; i--) {
        if (poly1[i] != 0) {
            printf("%dx^%d", poly1[i], i);
            if (i > 0) {
                printf(" + ");
            }
        }
    }
    printf("\n");

    // Display the second polynomial
    printf("Second polynomial is: ");
    for (i = deg2; i >= 0; i--) {
        if (poly2[i] != 0) {
            printf("%dx^%d", poly2[i], i);
            if (i > 0) {
                printf(" + ");
            }
        }
    }
    printf("\n");

    // Determine the maximum degree for the sum polynomial
    maxdeg = (deg1 > deg2) ? deg1 : deg2;

    // Sum the coefficients of both polynomials
    for (i = 0; i <= maxdeg; i++) {
        sumpoly[i] = 0; // Initialize to 0
        if (i <= deg1) {
            sumpoly[i] += poly1[i];
        }
        if (i <= deg2) {
            sumpoly[i] += poly2[i];
        }
    }

    // Display the sum of the polynomials
    printf("Sum of polynomials: ");
    for (i = maxdeg; i >= 0; i--) {
        if (sumpoly[i] != 0) {
            printf("%dx^%d", sumpoly[i], i);
            if (i > 0) {
                printf(" + ");
            }
        }
    }
    printf("\n");

    return 0;
}
