// Write a program to implement Matrix Multiplication.
#include<stdio.h>
int main()
{
    int r1,c1,c2,r2,j,i,a[10][10],b[10][10],c[10][10],k;
    printf("Enter your number of rows and columns for your 1st matrix:\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter your number of rows and columns for 2nd matrix:\n");
    scanf("%d%d",&r2,&c2);
    printf("Enter your 1st matrix:\n");
    for (i=0; i<r1; i++)
    for (j=0; j<c1; j++)
    scanf("%d",&a[i][j]);
    printf("Enter your 2nd matrix:\n");
    for (i=0; i<r2; i++)
    for (j=0; j<c2; j++)
    scanf("%d",&b[i][j]);
    if (r1==c2)
    {
        for (i=0; i<r1; i++)
        {
        for (j=0; j<c2; j++)
        {
        c[i][j]=0;
        for (k=0; k<c2; k++)
        {
        c[i][j]+=a[i][k]*b[k][j];
        }
        }
        }
        printf("The multiplied sum for the array is: \n");
        for (i=0; i<r2; i++)
        {
        for (j=0; j<c2; j++)
        {
        printf(" %d",c[i][j]);
        }
        printf("\n");
        }

    }
}