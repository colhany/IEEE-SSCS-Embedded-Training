#include <stdio.h>

char isOdd(int n);

int main()
{
    int n;

    printf("Enter any number: "),
    scanf("%d", &n);

    isOdd(n) ? printf("%d is odd", n) : printf("%d is even", n);

    return 0;
}

char isOdd(int n)
{
    if(n & 1)
        return 1;
    return 0;
}