#include <stdio.h>
#include <math.h>

#define TWO_DIFF_REAL 0
#define TWO_EQUAL_REAL 1
#define TWO_DIFF_CMPLX 2

int main()
{
    float a, b, c, disc, firstRoot, secondRoot;
    char roots;

    printf("Enter values of a, b, c of quadratic equation (aX^2 + bX = c): ");
    scanf("%f %f %f", &a, &b, &c);

    disc = (b * b) - (4 * a * c); //value of discriminant
    if(disc > 0)
        roots = TWO_DIFF_REAL;
    else if(disc < 0)
        roots = TWO_DIFF_CMPLX;
    else
        roots = TWO_EQUAL_REAL;

    switch (roots)
    {
        case TWO_DIFF_REAL:
            firstRoot = (-b + sqrt(disc)) / (2 * a);
            secondRoot = (-b - sqrt(disc)) / (2 * a);
            printf("Two distinct real roots exist: %.2f and %.2f", firstRoot, secondRoot);
            break;
        
        case TWO_DIFF_CMPLX:
            firstRoot = sqrt(-disc) / (2 * a);
            secondRoot = -b / (2 * a);
            printf("Two distinct complex roots exist: %.2f + i%.2f and %.2f - i%.2f", secondRoot, firstRoot, secondRoot, firstRoot);
            break;

        case TWO_EQUAL_REAL:
            firstRoot = -b / (2 * a);
            printf("Two equal real roots exist: %.2f", firstRoot);
            break;
    }

    return 0;
}