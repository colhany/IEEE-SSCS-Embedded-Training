#include <stdio.h>
#include <math.h>

int root(int x);

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Result = %d", root(n));

    return 0;
}

int root(int x)
{
    return sqrt(x);
}