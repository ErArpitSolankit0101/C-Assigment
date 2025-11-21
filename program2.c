// WAP to calculate circumference of circle
#include<stdio.h>
int main()
{
    float r,cir;
    const float pi =3.14;
    printf("Enter a radius of circle");
    scanf("%f",&r);
    cir = 2*pi*r;
    printf("Circumference of circle is : %.2f",cir);
    return 0;
}