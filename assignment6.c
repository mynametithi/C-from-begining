// Write a program in C to take user input in 2D array and perfrom sum of matrix of two 2D array!!!!!

#include <stdio.h>

int main()
{

    int a[50][50], b[50][50], sum[50][50];
    int i, j, rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Input first matrix
    printf("\nEnter elements of first matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {

            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    printf("\nEnter elements of second matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Add both matrices
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Display the sum matrix
    printf("\nSum of two matrices:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {

            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
