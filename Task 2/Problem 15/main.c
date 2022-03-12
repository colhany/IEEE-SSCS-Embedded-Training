#include <stdio.h>

#define SIZE 10

void rotateArray(int * arr, int n);
void inputArray(int * arr);
void printArray(int * arr);

int main()
{
    int arr[SIZE], n;

    printf("Enter %d elements array:\n", SIZE);
    inputArray(arr);

    printf("Enter number of times to rotate: ");
    scanf("%d", &n);

    printf("\nArray before rotation: ");
    printArray(arr);

    rotateArray(arr, n);

    printf("\nArray after rotation: ");
    printArray(arr);

    return 0;
}

void rotateArray(int * arr, int n)
{  
    int i, j, k;

    for(i = 0 ; i < n ; i++)
    {
        k = arr[SIZE - 1];

        for(j = (SIZE - 1) ; j > 0 ; j--)
            arr[j] = arr[j-1];
  
        arr[0] = k;
    }
}

void inputArray(int * arr)
{
    int i;
    for(i = 0 ; i < SIZE ; i++)
        scanf("%d", arr + i);
}

void printArray(int * arr)
{
    int i;
    for(i = 0 ; i < SIZE ; i++)
        printf("%d  ", arr[i]);
}