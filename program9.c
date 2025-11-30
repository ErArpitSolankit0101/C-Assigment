// Write a program to check whether a given year is a leap year or not. LY->366days,NLY->365
#include<stdio.h>
int main()
{
    int yr;
    printf("Enter Year: ");
    scanf("%d",&yr);
    if (yr%100)
    {
        /* Non century year */
        if (yr%4)
        {
            printf("%d not a Leap year",yr);
        }
        else
        {
             printf("%d a Leap year",yr);
        }
    }
    else
    {
        /* century year */
        if (yr%400)
        {
            printf("%d not a Leap year",yr);
        }
        else
        {
             printf("%d a Leap year",yr);
        } 
    }
    return 0;
}

