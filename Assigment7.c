// Write a program in C to take user input in 2D array and perfrom subtraction of matrix of two 2D array!!!!!

#include <stdio.h>

int main()
{

    int a[50][50], b[50][50], sub[50][50];
    int i, j, rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("\nEnter elements of first matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {

            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of second matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            sub[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("\nSubtraction of two matrices:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {

            printf("%d\t", sub[i][j]);
        }
        printf("\n");
    }
    return 0;
}
