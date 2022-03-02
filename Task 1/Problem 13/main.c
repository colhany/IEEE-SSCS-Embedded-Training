#include <stdio.h>

#define MIN 0.00001

int main()
{
    float term, sum;
    int n, nTerms, x;
    nTerms = 1;
    term = 1;
    n = 1;
    sum = 1;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    while(1)
    {
        term = term * x / n;
        sum += term;
        nTerms++;

        if(term < MIN)
            break;
        
        n++;
    }

    printf("Terms = %d Sum = %f", nTerms, sum);

    return 0;
}