#include <stdio.h>

int main()
{
    int a[10][10], transpose[10][10];
    int row, col, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Transpose logic
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }

    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
