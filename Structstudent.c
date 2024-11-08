#include<stdio.h>
#include<string.h>
    struct student{
        char name[50];
        int age;
        float mark;
    };
    void main(){
        struct student s;
        printf("Enter Student's name , age , mark :- ");
        scanf("%s%d%f",&s.name,&s.age,&s.mark);
        printf("The data are :- \n");
       printf("%s\n%d\n%f\n",s.name,s.age,s.mark);
        }
    
    