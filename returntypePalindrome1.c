// return type:
// palindrome number:
#include <stdio.h>

// Function with return type
int isPalindrome(int num)
{
    int original = num, reversed = 0, digit;

    while (num > 0)
    {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    if (original == reversed)
        return 1;
    else
        return 0;
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPalindrome(number))
        printf("%d is a Palindrome number.\n", number);
    else
        printf("%d is NOT a Palindrome number.\n", number);

    return 0;
}
