// Addition of Two Matrix

#include<stdio.h> 
void main(){
    int a[10][10],b[10][10],c[10][10];
    int i,j,m,n;
    printf("Enter the row and column value ");
    scanf("%d%d",&m,&n);
    printf("Enter the value to matrix a");
    for(i=0;i<m;i++){
        for (j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("Enter the value to matrix b");
         for(i=0;i<m;i++){
        for (j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    
    printf("Addition of two matrix are ");
       for(i=0;i<m;i++){
        for (j=0;j<n;j++){
           c[i][j] = a[i][j] + b[i][j];
        }
    }
    
     printf("The resultant matrix is ");
         for(i=0;i<m;i++){
        for (j=0;j<n;j++){
            printf("%d",c[i][j]);
        }
    }
    
}
