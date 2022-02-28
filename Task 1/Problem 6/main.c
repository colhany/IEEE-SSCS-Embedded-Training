#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, n, digits, currentDigit;
    digits = 0;

    printf("Enter any number to print in words: ");
    scanf("%d", &n);

    i = n;
    while(i)
    {
        digits++;
        i /= 10;
    }

    for(i = digits ; i > 0 ; i--)
    {
        currentDigit = n;
        for(j = 1 ; j < i ; j++)
            currentDigit /= 10;
        currentDigit %= 10;

        switch(currentDigit)
        {
            case 0:
                printf("Zero ");
                break;
            case 1:
                printf("One ");
                break;
            case 2:
                printf("Two ");
                break;
            case 3:
                printf("Three ");
                break;
            case 4:
                printf("Four ");
                break;
            case 5:
                printf("Five ");
                break;
            case 6:
                printf("Six ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 8:
                printf("Eight ");
                break;
            case 9:
                printf("Nine ");
                break;
        }
    }
    

    return 0;
}