#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct slink
{
    int no;
    struct slink*next;
    
    };
    void main()
    {
      struct slink *ptr,*start,*new,*end;
        int i=0;
        char ch='y';
        start=NULL;
        while((ch='y')|| (ch='Y'))
        {
            new = (struct slink*) malloc(sizeof(struct slink));
        printf("enter the number");
        scanf("%d",&new->no);
        if(start==NULL)
        {
            start=new;
            end=new;
        }
        else{
            end->next=new;
            end=new;
        }
         printf("Do you want to add more numbers (y/n)? ");
        scanf(" %c", &ch);
    }


      printf("LINKED LIST ELEMENTS : ");
        for(ptr=start;ptr != NULL ;ptr=ptr->next){
        printf("%d",ptr->no);
    }
printf("\n");
}
