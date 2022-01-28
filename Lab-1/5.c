// Program by Shravan 2451-21-737-113
// String concatenate
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int i;
    printf("Enter your 1st string: ");
    gets(a);
    printf("Enter your 2nd string: ");
    gets(b);
    printf("The concatenated string is: ");
    printf("%s%s",a,b);
    return 0;
}