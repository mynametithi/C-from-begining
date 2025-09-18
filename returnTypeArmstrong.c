// return type:
// Armstrong number:
#include <stdio.h>
#include <math.h>

// Function with return type
int isArmstrong(int num)
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
        return 1;
    else
        return 0;
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isArmstrong(number))
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is NOT an Armstrong number.\n", number);

    return 0;
}
