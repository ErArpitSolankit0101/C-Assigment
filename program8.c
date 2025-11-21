// WAP to input three character from the user and display character with their ASCII codes.
#include<stdio.h>
int main()
{
    char ch1,ch2,ch3;
    printf("Enter three Character: ");
    scanf("%c %c %c",&ch1,&ch2,&ch3);  //Delimiters use
    printf("character with ASCII\n");
    printf("%c=%d\n",ch1,ch1);
    printf("%c=%d\n",ch2,ch2);
    printf("%c=%d",ch3,ch3);
    return 0;
}