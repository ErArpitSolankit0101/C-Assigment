//WAP to calculate size of a real constant.
#include<stdio.h>
int main()
{
    int a;
    float b;
    printf("size of a real constant:%d",sizeof(a));
    printf("\n%d",sizeof(b));//variable
    printf("\n%d",sizeof(double));//datatype
    printf("\n%d",sizeof(1.5));// constant
    return 0;
}