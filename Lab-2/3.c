#include<stdio.h>
int main()
{
    int a[20][20],r,c,i,j;
    printf("Enter the number of rows and colums for your 2D Matrix: ");
    scanf("%d%d",&r,&c);
    printf("Enter your values in the array: ");
    // Taking values from user to 2d array
    for (i=0; i<r; i++)
    for (j=0; j<c; j++)
    scanf("%d",&a[i][j]);
    printf("Your values in the array are: \n");
    for (i=0; i<r; i++)
    {
    for (j=0; j<c; j++)
    {
        printf(" %d",a[i][j]);
    }
    printf("\n");
    }

}