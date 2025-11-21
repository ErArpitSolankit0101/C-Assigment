// Write a program to take a three digit number from the user and rotate its digits by
// one position towards the right.
#include<stdio.h>
int main()
{
  int a,b;
  printf("enter a number:");
  scanf("%d",&a);
  b= a%10*100+a/10;
  printf("Rotate number is: %d",b);
  return 0;
}