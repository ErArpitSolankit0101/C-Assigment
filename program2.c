/*Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.*/
#include<stdio.h>
int main()
{
    float sp,cp,Profit_percentage,Loss_percentage;
    printf("Enter cost price:");
    scanf("%f",&cp);
    printf("\nselling price: ");
    scanf("%f",&sp);
    if (sp-cp>=0)
    {
        Profit_percentage =(sp-cp)/cp*100;
        printf("Profit of percentage : %.2f",Profit_percentage);
    }
    else
    {
        Loss_percentage = (cp-sp)/cp*100;
        printf("Lose of percentage : %.2f",Loss_percentage);
    }


    return 0;
}
