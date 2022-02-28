#include <stdio.h>

int main()
{
    int n, sum;
    sum = 0;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        sum += n;
    }
    while (n);
    
    printf("Sum = %d", sum);

    return 0;
}