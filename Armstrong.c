#include<stdio.h>
void main()
{
    int num,originalnum,rem,result=0;
    printf("Enter a number");
    scanf("%d",&num);
    originalnum=num;
    while(originalnum!=0)
    {
        rem=originalnum%10;
        result=result+rem*rem*rem;
        originalnum=originalnum/10;
    }
    if(result==num)
        printf("%d is an Armstrong number",num);
        else
         printf("%d is not an Armstrong number",num);
}