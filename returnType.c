// using return type function:
//  write  a c program print the value of sum:
#include <stdio.h>
int add(int a, int b)
{
    return (a + b);
}
int main()
{
    int x, y, sum;
    printf("Enter two number x and y :");
    scanf("%d %d", &x, &y);
    sum = add(x, y);
    printf("sum of two number = %d", sum);
}
