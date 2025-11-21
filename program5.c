/*
 WAP to ask user about the cost price and sp banana par darzon. calculate profit or loss earnd upon selling 25 bananas.
*/
#include<stdio.h>
int main()
{
    int cp,sp;
    float profit;
    printf("Enter a CP of 12 Bananas: ");
    scanf("%d",&cp);
    printf("Enter a SP of 12 Bananas: ");
    scanf("%d",&sp);
    profit =(sp-cp)*25/12;
    printf("profit is :%0.2f",profit);
    return 0;
}
