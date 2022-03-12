#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

struct minmax
{
    int min;
    int max;
};

struct minmax calcMinMax(int size, int * arr);

int main()
{
    struct minmax results;
    int size, * arr, i;

    printf("Enter size of array: ");
    scanf("%d", &size);

    arr = (int *)calloc(size, sizeof(int));

    printf("\nEnter %d elements in array: \n", size);
    for (i = 0; i < size; i++)
        scanf("%d", arr + i);

    results = calcMinMax(size, arr);

    printf("Minimum value in array: %d\n", results.min);
    printf("Maximum value in array: %d\n", results.max);

    free(arr);

    return 0;
}

struct minmax calcMinMax(int size, int * arr)
{
    struct minmax results;
    int min = INT_MAX;
    int max = INT_MIN;
    int i;

    for(i = 0 ; i < size ; i++)
    {
        if(arr[i] > max)
            max = arr[i];
        
        if(arr[i] < min)
            min = arr[i];
    }

    results.min = min;
    results.max = max;

    return results;
}