/*Assume price of 1 USD is INR 89.61 Write a program to take the amount in INR
and convert it into USD.
*/
#include<stdio.h>
int main()
{
  float r,d;
  printf("Enter amount in INR:");
  scanf("%f",&r);
   d= r/89.61;
  printf("%.2f INR into %0.2f USD.",r,d);
  return 0;
}