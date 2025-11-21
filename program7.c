// WAP to swap values of two int variable without using a 3rd variable.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    printf("before swapping: %d %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping: %d %d",a,b);
    return 0;
}