// Conditional Operator
#include<stdio.h>
int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    n%2==0?printf("Given number is an even number."):printf("Given number is an odd number");
    return 0;
}