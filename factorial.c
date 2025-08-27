// Write a C program to print the value of factorial:
#include <stdio.h>
int main()
{
    int fact = 1;
    int i, n;
    printf("Enter the number you want to check for factorial:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("The value of factorial:%d", fact);
    return 0;
}