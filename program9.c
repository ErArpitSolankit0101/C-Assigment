// WAP to calculate area of a rectangle.Input appropriate data from the user
#include<stdio.h>
int main()
{
    int l,w,ar,perimeter;
    printf("Enter Length : ");
    scanf("%d",&l);
    printf("Enter Width : ");
    scanf("%d",&w);
    ar=l*w;
    printf("Area of Rectangle: %d",ar);
    perimeter =2*(l+w);
    printf("\nPerimeter of rectangle: %d",perimeter);
    return 0;
}