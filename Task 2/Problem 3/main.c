#include <stdio.h>

void enterData(int row, int col, int matrix[row][col], char name);
void multiplyMatrices(int row1, int col1, int mat1[row1][col1], int row2, int col2, int mat2[row2][col2], int result[row1][col2]);
void display(int row, int col, int matrix[row][col]);

int main()
{
    int row1, col1, row2, col2, i, j;

    printf("Enter rows and columns for first matrix: ");
    scanf("%d\n%d", &row1, &col1);

    printf("Enter rows and columns for second matrix: ");
    scanf("%d\n%d", &row2, &col2);
    printf("\n");

    int mat1[row1][col1];
    int mat2[row2][col2];
    int result[row1][col2];

    for(i = 0 ; i < row1 ; i++)
        for(j = 0 ; j < col2 ; j++)
            result[i][j] = 0;

    printf("Enter elements of matrix 1:\n");
    enterData(row1, col1, mat1, 'a');
    printf("\n");

    printf("Enter elements of matrix 2:\n");
    enterData(row2, col2, mat2, 'b');
    printf("\n");
    
    multiplyMatrices(row1, col1, mat1, row2, col2, mat2, result);
    display(row1, col2, result);
    printf("\n");

    return 0;
}

void enterData(int row, int col, int matrix[row][col], char name)
{
    int i, j;

    for(i = 0 ; i < row ; i++)
    {
        for(j = 0 ; j < col ; j++)
        {
            printf("Enter element %c%d%d: ", name, i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void multiplyMatrices(int row1, int col1, int mat1[row1][col1], int row2, int col2, int mat2[row2][col2], int result[row1][col2])
{
    int i, j, k;

    for(i = 0 ; i < row1 ; i++)
        for(j = 0 ; j < col2 ; j++)
            for(k = 0 ; k < col1 ; k++)
                result[i][j] += mat1[i][k] * mat2[k][j];
}

void display(int row, int col, int matrix[row][col])
{
    int i, j;

    printf("Output Matrix:\n");
    for(i = 0 ; i < row ; i++)
    {
        for(j = 0 ; j < col ; j++)
            printf("%d\t", matrix[i][j]);
        printf("\n\n");
    }
}