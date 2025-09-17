// non return type :
// palindrome number check:
#include <stdio.h>

// Function without return type
void isPalindrome(int num)
{
    int original = num, reversed = 0, digit;

    while (num > 0)
    {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    if (original == reversed)
        printf("%d is a Palindrome number.\n", original);
    else
        printf("%d is NOT a Palindrome number.\n", original);
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    isPalindrome(number);
    return 0;
}
