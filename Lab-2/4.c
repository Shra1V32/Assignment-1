// Program to add & subtract two matrices
#include<stdio.h>
int main()
{
    int a[20][20],i,j,r1,c1,r2,c2,b[20][20],sum[20][20];
    printf("Enter your rows and columns in 1st array: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter your rows and columnsin 2nd array: ");
    scanf("%d%d",&r2,&c2);
    printf("Enter the elements in your 1st matrix: ");
    for (i=0; i<r1; i++)
    for (j=0; j<c1; j++)
    scanf("%d",&a[i][j]);
    printf("Your values in the 1st array are: \n");
    for (i=0; i<r1; i++)
    {
    for (j=0; j<c1; j++)
    {
        printf(" %d",a[i][j]);
    }
    printf("\n");
    }
    printf("Enter the elements in your 2st matrix: ");
    for (i=0; i<r1; i++)
    for (j=0; j<c1; j++)
    scanf("%d",&b[i][j]);
    printf("Your values in the 2st array are: \n");
    for (i=0; i<r2; i++)
    {
    for (j=0; j<c2; j++)
    {
        printf(" %d",b[i][j]);
    }
    printf("\n");
    }
    printf("\n\n");
    // Perform addition
    for (i=0; i<r2; i++)
    {
    for (j=0; j<c2; j++)
    {
    sum[i][j]=a[i][j]+b[i][j];
    }
    }
    printf("The addition done for the matrix:\n" );
    for (i=0; i<r2; i++)
    {
    for (j=0; j<c2; j++)
    {
    printf(" %d",sum[i][j]);
    }
    printf("\n");
    }

    


}