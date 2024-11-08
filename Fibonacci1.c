#include<stdio.h>
void main()
{
    int i,n,fib0,fib1,fib;
    fib0=0;
    fib1=1;
    printf("enter range:");
    scanf("%d",&n);
    printf("%d %d",fib0,fib1);
    for(i=1;i<=n;i++)
    {
        fib=fib0+fib1;
        printf("%d",fib);
        fib0=fib1;
        fib1=fib;
    }
    printf("\n");
}