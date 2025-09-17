// not return type:
#include <stdio.h>
void twoSum(int x, int y)
{
    int sum = (x + y);
    printf(" Sum of two number : %d", sum);
}

int main()
{
    int x, y, sum;
    printf("Enter two number x and y :");
    scanf("%d %d", &x, &y);

    twoSum(x, y);
    return 0;
}
