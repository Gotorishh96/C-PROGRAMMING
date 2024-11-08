#include<stdio.h>
void main()
{
    int a[100],i,j,temp,n;
    printf("enter the number of element");
    scanf("%d",&n);
    printf("enter array element");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
    {
        for(j=i;j>0 && a[j-1]>a[j];j--)
        {
            temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
        }
}
printf("sorted list");
for(i=0;i<n;i++){
    printf("%d ",a[i]);
}
}