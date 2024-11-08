#include <stdio.h>
int fib(int n);
void main()
{
    int term,i;
    printf("Enter the term number: ");
    scanf("%d", &term);
    for(i = 0; i < term; i++)
    printf("%d", fib(i));
}
int fib(int n)
{
    if(n == 0||n == 1)
    return (1);
    else
    return (fib(n-1) + fib(n-2));
}