#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],i,j,m,n,p,q;
    printf("enter rows and column for matrix a:");
    scanf("%d %d",&m,&n);
    printf("enter rows and column for matrix b:");
    scanf("%d %d",&p,&q);
    printf("enter the data in matrix a:");
     for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
     }
     printf("the matrix elements are:");
     for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }
     }
     printf("\n transpose is:-");
     for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
        {
            b[j][i]=a[i][j];
        }
     }
     printf("the new matrix:");
     for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
        {
            printf("%d",b[i][j]);
        }
     }
}