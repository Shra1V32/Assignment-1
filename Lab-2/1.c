// Call by value (swap)
#include<stdio.h>
void swap(int a, int b) // function definition
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
}
void swap();
int main()
{
    int a,b;
    printf("Enter your two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Your entered numbers are: a=%d, b=%d",a,b);
    swap(a,b); // function call
}