// return type :
// factorial find:
#include <stdio.h>

// Function with return type:

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

    long long result = factorial(num); // get result from function
    printf("Factorial of %d = %lld\n", num, result);

    return 0;
}
