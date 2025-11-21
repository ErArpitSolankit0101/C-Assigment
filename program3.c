//  Write a program to print size of an int, a float, a char and a double type variable
#include<stdio.h>
int main()
{
    int a=10;
    float c=10.9;
    char x='S';
    double z=13.8;
    printf("\n int:%d",sizeof(a));
    printf("\n folat:%d",sizeof(c));
    printf("\n char : %d",sizeof(x));
    printf("\n double:%d",sizeof(z));
    return 0;
}