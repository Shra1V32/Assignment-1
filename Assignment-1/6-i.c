/*
. Write a program to print following patterns
i) # # # # #
 @ @ @ @ @
 # # # # # 
 @ @ @ @ @ 
 # # # # # 
*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1; i<=5; i++)
    {
        for (j=0; j<=5; j++)
        {
        if (i%2==1)
        printf(" #");
        else
        printf(" @");
        }
    printf("\n");
    }
    return 0;
}