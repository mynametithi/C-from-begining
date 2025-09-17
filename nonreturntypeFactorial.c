// non return type:
//  Find factorial given by user:
#include <stdio.h>
long long factorial(int n)
{
    long long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    long long result = factorial(num);
    printf("Factorial of %d = %lld\n", num, result);

    return 0;
}
