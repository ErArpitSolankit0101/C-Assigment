// Write a program to check whether a given number is an even number or an odd number without using % operator.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if (a/2*2==a)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    
    return 0;
}