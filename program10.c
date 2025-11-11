/*
WAP to calculate area of a circle.Take radius odf circle from user as input and print the result in below given format
*/
#include<stdio.h>
int main()
{
    float r,ar;
    const float pi =3.14;  
    printf("Enter a radius of circle:");
    scanf("%f",&r);
    ar=pi*r*r;
    printf("Area of circle is %.2f having the radius %0.2f",ar,r);
    return 0;
}