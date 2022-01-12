// switch statement
#include<stdio.h>
int main()
{
    int n,result;
    printf("Enter your number: ");
    scanf("%d",&n);
    result=n%2;
    switch (result)
    {
    case 0:
        printf("Given number is a even number");
        break;
    case 1:
        printf("Given number is a odd number");
        break;
    default:
        break;
    }
}