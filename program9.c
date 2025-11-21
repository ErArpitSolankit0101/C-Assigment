// What will be the value stored in the variable x after executing following statement:
// x=!2>-2
#include<stdio.h>
int main()
{
  int x=!2>-2; //1>-2==1 true
  printf("%d",x);
  return 0;
}