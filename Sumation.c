#include<stdio.h>
void main(){
    int n;
    int sum=0,rem=0;
    printf("Enter any five number");
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("The Sumation of 5 number %d ", sum);

}