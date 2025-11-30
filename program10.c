// Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
    {
       if(a>c)
            printf("Frist number is greatest: %d",a);
        else
            printf("Third number is greatest: %d",c);
           
    }
    else
    {
        if(b>c)
            printf("Second number is greatest: %d",b);
        else
            printf("Third number is greatest: %d",c);
           
    }
    return 0;
}