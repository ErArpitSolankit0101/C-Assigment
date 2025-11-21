/* 
WAP to take time as an input in below given format and convert the date for format and display the result as given below
input : "HH:MM";
output: "HH hour MM minutes";
*/
#include<stdio.h>
int main()
{
    int h,m;
    printf("Input formate HH:MM: ");
    scanf("%d:%d",&h,&m);
    printf("Output formate HH hour MM minutes\n");
    printf("%d hour %d minutes",h,m);
    return 0;
}