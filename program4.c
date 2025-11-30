// Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
int main()
{
    char k;
    printf("Enter Alophabet: ");
    scanf("%c",&k);
    if (k>='a' && k<='z')
    {
        printf("Lower case: %c",k);
    }
    else if (k>='A' && k<='Z')
    {
       printf("Upper case: %c",k); 
    }
    return 0;
}