#include <stdio.h>
void main() {
    int n[10]; 
    int i, greatest;
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &n[i]);
    }
    greatest =n[0];
    for (i = 1; i < 10; i++) {
        if (n[i] > greatest) {
            greatest = n[i];
        }
    }
    printf("The greatest number among the entered numbers is: %d\n", greatest);
}
