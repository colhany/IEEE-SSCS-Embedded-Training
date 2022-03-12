#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

void calcMinMax(int size, int * arr, int * minmax);

int main()
{
    int minmax[2];
    int size, * arr, i;

    printf("Enter size of array: ");
    scanf("%d", &size);

    arr = (int *)calloc(size, sizeof(int));

    printf("\nEnter %d elements in array: \n", size);
    for (i = 0; i < size; i++)
        scanf("%d", arr + i);

    calcMinMax(size, arr, minmax);

    printf("Minimum value in array: %d\n", minmax[0]);
    printf("Maximum value in array: %d\n", minmax[1]);

    free(arr);

    return 0;
}

void calcMinMax(int size, int * arr, int * minmax)
{
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

    minmax[0] = min;
    minmax[1] = max;
}