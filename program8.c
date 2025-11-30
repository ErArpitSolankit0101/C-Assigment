/* 
    ax^2+bx+c=0 ,D=b^2-4ac
   1.D>0: The root are real and distinct(different)
   2.D=0: The root are real and equal 
   3.D<0: The root are real and imaginary(also called complex) 
Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots
*/
#include<stdio.h>
int main()
{
    int a,b,c,D;
    printf("Enter the cofficent of equation: ");
    scanf("%d%d%d",&a,&b,&c);
    D=b*b-4*a*c;
    if (D>0)
    {
        printf("The root are real and distinct.");
    }
    else if (D==0)
    {
        printf("The root are real and equal.");
    }
    else if (D<0)
    {
        printf("The root are real and imaginary.");
    }

    return 0;
}