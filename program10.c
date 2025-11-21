// WAP to swap values of two int variable in single line arithmetic expression.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("before swapping: %d %d",a,b);
    a=a+b-(b=a);
    printf("\nAfter swapping: %d %d",a,b);
    return 0;
}