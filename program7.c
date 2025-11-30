// Write a program to print greater between two numbers. Print one number if both are the same.
// a>b ?printf("%d",a) : printf("%d",b);
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Two numbers: ");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        printf("Frist number is greater: %d",a);
    }
    else if(a==b)
    {
        printf("Both are same numbers is: %d",a);
    }
    else
    {
        printf("Second number is greater: %d",b);
    }
    return 0;
}