#include<stdio.h>
void main()
{
    int n,digit,rev,num;
    rev=0;
    printf("Enter any numbers");
    scanf("%d",&num);
    n=num;
    do
    {
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    } 
    while (n!=0);
      if(rev == num)
        printf(" number is a palindrome number");
    else
          printf(" number is not a palindrome number");
        }