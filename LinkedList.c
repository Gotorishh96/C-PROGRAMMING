#include<stdio.h>
#include <malloc.h>
struct link
{
    int n;
    struct link*next;
};
struct link*first=NULL,*last,*curr;
void create(int);
void display(struct link*);
void main()
{
    int n1;
    char ch='Y';
    while(ch=='Y')
    {
        printf("Enter the number");
        scanf("%d",&n1);
        printf("enter another Do you want to enter or not choice(Y/N)");
       
    }
    display(first);
    
}
void create(int num)
{
    curr=(struct link*)malloc(sizeof(struct link));
    curr ->n=num;
    curr ->next=NULL;
    if(first==NULL)
    {
        first=last=curr;
    }
    else{
        last ->next=curr;
        last=curr;
    }
}
void display(struct link *m)

{
    while(m!=NULL)
    {
        printf("%d",m->n);
        m=m->next;
    }
}