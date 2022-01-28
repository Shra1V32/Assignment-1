#include<stdio.h>
int main()
{
    int a[20][20],b[20][20],i,r1,r2,c1,c2,j,k,c[20][20];
    printf("Enter number of rows & columns in the 1st matrix: ");
    scanf("%d %d",&r1,&c1);
    printf("Enter number of rows & columns in the 2nd matrix: ");
    scanf("%d %d",&r2,&c2);
    if (c1 == r2)
    {
    printf("Enter the elements in 1st matrix:\n");
    for (i=0; i<r1; i++)
    for (j=0; j<c1; j++)
    scanf("%d",&a[i][j]);
    printf("The elements in 1st matrix:\n");
    for (i=0; i<r1; i++)
    {
    for (j=0; j<c1; j++)
    {
    printf(" %d",a[i][j]);
    }
    printf("\n");
    }
    printf("Enter the elements in 2st matrix:\n");
    for (i=0; i<r2; i++)
    for (j=0; j<c2; j++)
    scanf("%d",&b[i][j]);
    printf("The elements in 2nd matrix:\n");
    for (i=0; i<r2; i++)
    {
    for (j=0; j<c2; j++)
    {
    printf(" %d",b[i][j]);
    }
    printf("\n");
    }
    for(i=0;i<r1;i++)    
    {
    for(j=0;j<c2;j++)    
    {    
    c[i][j]=0;   
    for(k=0;k<c2;k++)
    {    
    c[i][j]+=a[i][k]*b[k][j];    
    }    
    }    
    }
    printf("The multiplication sum is: \n");
    for (i=0; i<r1; i++)
    {
        for (j=0; j<c2; j++)
        {
            printf(" %d",c[i][j]);
        }
    printf("\n");
    }
    }
    else
    {
        printf("Matrix multiplication is not possible in the given order.");
    }  

}