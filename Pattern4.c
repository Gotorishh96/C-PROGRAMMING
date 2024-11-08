#include <stdio.h>

 void main() {
    int i, j, space;
    int n ;
    printf("Enter any number of rows");
    scanf("%d",&n);
    for(i = n; i >= 1; i--) {
                for(space = 0; space < n - i; space++) {
            printf(" ");
        }
            for(j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for(i = 2; i <= n; i++) {
        for(space = 0; space < n - i; space++) {
            printf(" ");
        }
        for(j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}
