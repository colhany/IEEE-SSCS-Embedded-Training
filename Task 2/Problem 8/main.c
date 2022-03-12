#include <stdio.h>

#define CUBE(x) ((x) * (x) * (x))
char isArmstrong(int n);

int main()
{
    int n;

    printf("Input a number: ");
    scanf("%d", &n);

    isArmstrong(n) ? printf("%d is an Armstrong number", n) : printf("%d is NOT an Armstrong number", n);

    return 0;
}

char isArmstrong(int n)
{
    int temp = n;
    int sumCubes = 0;

    while(temp)
    {
        sumCubes += CUBE(temp % 10);
        temp /= 10;
    }

    return (n == sumCubes) ? 1 : 0;
}