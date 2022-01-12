// program to print the sum of all odd digits of a given number
#include<stdio.h>
int main()
{
    int num,sum,result=0,d1,rem;
    printf("Enter your number: ");
    scanf("%d",&num);
    while (num>0)
    {
       d1=num%10;
       rem=d1%2;
       if (rem==1)
       result=result+d1;
       num=num/10;
    }
    printf("The sum of the odd digits in your number is: %d",result);
    return 0;
    
}