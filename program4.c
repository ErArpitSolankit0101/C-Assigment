// WAP to print unit digit of a given number.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    int res= num%10;
    printf("Unit Digit of a %d is %d",num,res);
    return 0;
}