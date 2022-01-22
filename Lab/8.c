// Program by Shravan 2451-21-737-113
#include<stdio.h>  
void sum();  
void main()  
{  
    printf("\nGoing to calculate the sum of two numbers:");  
    sum();  
}  
void sum()  
{  
    int a,b;   
    printf("\nEnter two numbers:\n");  
    scanf("%d %d",&a,&b);   
    printf("The sum is %d",a+b);  
} 