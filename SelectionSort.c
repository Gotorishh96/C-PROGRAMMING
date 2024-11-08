#include<stdio.h>
void main()
{
    int i,j,count,n,temp,number[25];
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the  elements");
    for(i=0;i<n;i++)
    scanf("%d",&number[i]);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(number[i]>number[j]){
                temp=number[i];
                number[i]=number[j];
                number[j]=temp;
            }
        }
    }
     printf("the sorted elements are: ");  
     for(i=0;i<n;i++)
     printf("%d ",number[i]);
}