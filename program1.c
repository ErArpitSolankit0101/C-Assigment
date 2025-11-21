// WAP to calculate averge 3 integer
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter 3 number: ");
    scanf("%d%d%d",&x,&y,&z);
    float avg = (x+y+z)/3.0;
    printf("Averge of 3 integer:%.2f",avg);
    return 0;
}