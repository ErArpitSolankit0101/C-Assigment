/*  Assignment-6: More on Decision Control Statements
1. Write a program to check whether a given number is a three digit number or not.
*/
#include<stdio.h>
int main()
{
    int b;
    printf("Enter a number: ");
    scanf("%d",&b);
    if (b>99 && b<=999)
    {
        printf("Three digit number: %d",b);
    }
    else{
        printf("Not three digit number: %d",b);
    } 
    return 0;
}