    //Bubble Sort
#include<stdio.h>
void bubblesort(int array[],int size)
{
    int i,step;
    for(step=0; step<size-1;++step)
    {
        for( i=0;i<size+step;++i)
    {
        if(array[i]>array[i+1])
        {
            int temp;
            temp=array[i];
            array[i]=array[i+1];
            array[i+1]=temp;
       }
    }
    }
}
void print(int array[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d",array[i]);
    }
printf("\n");
}
void main()
{
    int data[]={2,4,6,1,5,3,8,9,7};
    int size=(sizeof(data)/(sizeof data[0]));
    bubblesort(data,size);
    printf("sorted array is:");
    print(data,size);
}
