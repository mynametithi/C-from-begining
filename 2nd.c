// Write a C program to print the value of addition of two numbers:
#include <stdio.h>
#include <math.h>
int main()
{
    int A, B, C;
    printf("Enter the value of A:");
    scanf("%d", &A);
    printf("Enter the value of B:");
    scanf("%d", &B);
    C = A + B;
    printf("The value of addition:%d", C);
    return 0;
}