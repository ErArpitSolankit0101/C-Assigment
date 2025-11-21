/* 
WAP to take date as an input in below given format and convert the date for format and display the result as given below
input : "DD/MM/YY";(16/11/2025)
output: "Day - DD ,Month-MM, Year- YY";(Day - 16 ,Month-11, Year- 2025)
*/
#include<stdio.h>
int main()
{
    int d,m,y;
    printf("Enter Date format DD/MM/YY: ");
    scanf("%d/%d/%d",&d,&m,&y);
    printf("Output Screen....\n");
    printf("Day - %d ,Month-%d, Year- %d",d,m,y);
    return 0;
}
