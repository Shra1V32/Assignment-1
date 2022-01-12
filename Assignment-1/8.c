/*
Write a program to initialise Employee code, Employee name and salary as given below
200 204 210 218 226 230
R V G N K M
45000 85000 65000 75000 55000 95000
Input the Employee code from the user to display Employee name and Employee salary
[Use Binary Search]
*/
#include<stdio.h>
int main()
{
    int salary[10],name[10],code[10],n,i,search,low,high,mid;
    printf("Enter the number of employees: ");
    scanf("%d",&n);
    printf("Enter the code of the employees respectively:\n");
    for (i=0; i<n; i++)
    scanf("%d",&code[i]);
    printf("Enter the names of the employees respectively:\n");
    for (i=0; i<n; i++)
    scanf("%s",&name[i]);
    printf("Enter the salaries of the employees respectively:\n");
    for (i=0; i<n; i++)
    scanf("%d",&salary[i]);
    printf("Enter the employee code to search: ");
    scanf("%d",&search);
    low=0; 
    high=n-1;
    while (low<=high)
    {
        mid=(low+high)/2;
        if (code[mid]>search)
        high=mid-1;
        else if(code[mid]<search)
        low=mid+1;
        else
        break;
    }
    if (code[mid]==search)
    printf("Entered Employee code found:\nEmployee Salary: %d, Employee Name: %c",salary[mid],name[mid]);
    else
    printf("No Employee code found.");
    return 0;
}