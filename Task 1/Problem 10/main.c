#include <stdio.h>
#include <stdlib.h>

int findMax(int * arr, int size, int * max);
int findMin(int * arr, int size, int * min);

int main()
{
    int size, i, min, max;
    int * numbers;

    max = 0;
    min = 2147483647;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    numbers = (int *)malloc(sizeof(int) * size);
    if(!numbers)
        exit(0);

    printf("Enter %d elements in array: ", size);

    for(i = 0 ; i < size ; i++)
        scanf("%d", numbers + i);

    findMin(numbers, size, &min);
    findMax(numbers, size, &max);

    printf("Minimum element in array: %d\n", min);
    printf("Maximum element in array: %d\n", max);
    
    free(numbers);
    return 0;
}

int findMax(int * arr, int size, int * max)
{
    if(size == 1)
        return *max;
    
    if(arr[size - 1] > *max)
        *max = arr[size - 1];
    
    findMax(arr, size - 1, max);
}

int findMin(int * arr, int size, int * min)
{
    if(size == 1)
        return *min;

    if(arr[size - 1] < *min)
        *min = arr[size - 1];

    findMin(arr, size - 1, min);
}