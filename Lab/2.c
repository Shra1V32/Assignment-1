// Program by Shravan 2451-21-737-113
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int x;
    printf("Enter your string: ");
    gets(a);
    x=strlen(a);
    printf("The number of characters in your string is: %d",x);
    return 0;
}