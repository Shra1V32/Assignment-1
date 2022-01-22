// Program by Shravan 2451-21-737-113
#include<string.h>
#include<stdio.h>
int main()
{
    char a[100]="Hello Shravan",b[100];
    int i;
    for (i=0; i<100; i++)
    {
    b[i]=a[i];
    if (a[i] == '\0' )
    break;
    }
    printf("The copied string is: %s",b);
    return 0;
}