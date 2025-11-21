// WAP to calculate volume of cuboid .
#include<stdio.h>
int main()
{
    int l,w,h;
    printf("Length: ");
    scanf("%d",&l);
    printf("\nWidth: ");
    scanf("%d",&w);
    printf("\nHight: ");
    scanf("%d",&h);
    int vol_cub = l*w*h;
    printf("Volume of cuboid : %d",vol_cub);

    return 0;
}