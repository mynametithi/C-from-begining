#include <stdio.h>
#include <math.h> // for pow() function

int main()
{
    int n;
    float x, y;

    printf("Enter value of x: ");
    scanf("%f", &x);

    printf("Enter value of n: ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        y = 1 + x;
        break;

    case 2:
        y = 1 + (x / n);
        break;

    case 3:
        y = 1 + pow(x, n); // x^n
        break;

    default:
        y = 1 + n * x;
        break;
    }

    printf("Value of y = %.2f\n", y);

    return 0;
}
