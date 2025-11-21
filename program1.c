// WAP to input a three digit number and display the sum of the digits.
#include<stdio.h>
int main()
{
    int x ,sum=0;
    printf("Enter three digit number: ");
    scanf("%d",&x);
    sum= x/100+x/10%10+x%10;
    printf("sum of digit:%d",sum);
    return 0;
}