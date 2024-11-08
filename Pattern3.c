#include <stdio.h>
void main() {
    int n;
    printf("Enter the number of rows for the hourglass (odd number): ");
    scanf("%d", &n);
        for (int i = 0; i < n / 2 + 1; i++) {
        for (int j = 0; j < i; j++)
            printf(" ");
        for (int j = 0; j < n-2 * i; j++)
            printf("*");
        printf("\n");
    }
    for (int i = n / 2 - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++)
            printf(" ");
        for (int j = 0; j < n-2 * i; j++)
            printf("*");
        printf("\n");
    }
    }