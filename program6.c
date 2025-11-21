// WAP to swap values of two int variable
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    printf("before swapping: %d %d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nAfter swapping: %d %d",a,b);
    return 0;
}