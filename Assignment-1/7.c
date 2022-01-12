/* Write a program to accept the roll number of 10 students in a single dimensional array and their
percentage obtained in another single dimensional array. Search for a roll number given by the user.
If found print percentage obtained along with roll number else display the message “no such roll
number”. [Use Linear Search]
61 54 20 30 101
91.5 96.3 85.4 90.1 68.9
[ Ex: If input is 30 then output: percentage obtained by 30 is 90.1 ] */

#include<stdio.h>
int main()
{
    int a[10],b[10],roll,i,search,x;
    // Roll Number is entered
    printf("Enter the roll number of 10 students:\n");
    for (i=0; i<10; i++)
    {
        printf("Enter for %d student: ",i+1);
        scanf("%d",&a[i]);
    }
    // Input their percentages
    printf("Enter their percentages:\n");
    for (i=0; i<10; i++)
    {
        printf("Enter for %d student: ",i+1);
        scanf("%d",&b[i]);
    }
    // Searching for the roll number
    printf("Enter the roll number to search: ");
    scanf("%d",&search);
    for (i=0; i<10; i++)
    {
        if (search==a[i])
        {
        x=1;
        break;
        }
    }
    if (x==1)
    printf("Data Found for roll number %d \nRoll Number %d: Percentage=%d",search,search,b[i]);
    else
    printf("Invalid selection.");
    return 0;

}