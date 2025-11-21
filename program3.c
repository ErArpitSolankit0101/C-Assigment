// WAP to calculate simple instrest 
#include<stdio.h>
int main()
{
    int p,r,t;
    printf("Enter Principal:");
    scanf("%d",&p);
    printf("\nEnter Rate:");
    scanf("%d",&r);
    printf("\nEnter time:");
    scanf("%d",&t);
    float si=(p*r*t)/100.0;
    printf("\nSI is %.2f",si);
    return 0;
}