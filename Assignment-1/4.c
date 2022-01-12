//  Program to print ASCII values of A-Z, a-z, 0-9.
#include<stdio.h>
int main()
{
    char i;
    for (i='A'; i<='Z'; i++)
    printf("ASCII for %c=%d\n",i,i);
    for (i='0'; i<='9'; i++)
    printf("ASCII for %c=%d\n",i,i);
    for (i='a'; i<='z'; i++)
    printf("ASCII for %c=%d\n",i,i);
    return 0;
}