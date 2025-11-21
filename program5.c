// WAP to print a given number without its last digit.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    int res= num/10;
    printf("without last Digit of a %d is %d",num,res);
    return 0;
}