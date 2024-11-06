#include<stdio.h>
void main()
{
    int a[10],i;
    printf("enter the elements in the array");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the array elements are:\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
}