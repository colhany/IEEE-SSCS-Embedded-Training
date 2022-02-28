#include <stdio.h>
#include <ctype.h>

int main()
{
    char in;

    printf("Enter any character: ");
    scanf("%c", &in);

    isalpha(in) ? printf("The character is alphabetic", in) : printf("The character is NOT alphabetic");

    return 0;
}