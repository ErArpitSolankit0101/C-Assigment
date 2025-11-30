//Write a program which takes the month number as an input and display number of days in that month.
#include<stdio.h>
int main(){
    int mounth;
    printf("Enter mounth number: ");
    scanf("%d",&mounth);
    if (mounth==4 || mounth==6 || mounth==9 || mounth==11)
    {
        printf("30 days");
    }
    else if(mounth == 2)
       printf("28 & 29 days");
    else
       printf("31 days");
    return 0;
}