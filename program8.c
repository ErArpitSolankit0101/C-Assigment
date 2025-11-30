//  Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.
#include<stdio.h>
int main()
{
    char symbol;
    printf("Enter a symbols: ");
    scanf("%c",&symbol);
    if (symbol>='A' &&  symbol<='Z')
    {
        printf("Upper case alpabet.");
    }
    else if (symbol>='a' &&  symbol<='z')
    {
        printf("Lower case alphabet.");
    }
     else if (symbol>='0' &&  symbol<='9')
    {
        printf("Digit character.");
    }
    else
    {
        printf("Special character.");
    }
    return 0;
}