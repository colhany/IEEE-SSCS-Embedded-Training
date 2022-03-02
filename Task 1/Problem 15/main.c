#include <stdio.h>

#define INT_SIZE_BITS (sizeof(int) * 8)

int main()
{
    int n, i, binary[INT_SIZE_BITS];

    printf("Enter any number: ");
    scanf("%d", &n);

    for(i = (INT_SIZE_BITS - 1) ; i >= 0 ; i--)
    {
        binary[i] = (n & 1);
        n >>= 1;
    }

    printf("Converted binary: ");
    for(i = 0 ; i < INT_SIZE_BITS ; i++)
        printf("%d", binary[i]);

    return 0;
}