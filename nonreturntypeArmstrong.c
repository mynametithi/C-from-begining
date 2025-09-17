// Non return type :
// armstrong number:
#include <stdio.h>
#include <math.h>

void isArmstrong(int num)
{
    int original = num, sum = 0, digits = 0, temp, digit;

    temp = num;
    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp > 0)
    {
        digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is NOT an Armstrong number.\n", original);
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    isArmstrong(number);
    return 0;
}
