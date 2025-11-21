/* 
WAP with one char type variable.Assign 'A' in the variable.Now change the value of variable from 'A' to 'B' using increment operator
*/
#include<stdio.h>
int main()
{
    printf("print A\n");
    char c='A';
    printf("%c",c);
    printf("\nprint B by increment operator");
    char b= c++;
    printf("\n%c",c);
    return 0;
}