// Write a c program to convert a decimal number to hexadecimal number:
#include <stdio.h>

int main()
{
    int decimal, remainder;
    char hexNum[50]; // to store hexadecimal digits
    int i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    int temp = decimal;

    // Conversion loop
    while (temp != 0)
    {
        remainder = temp % 16;

        if (remainder < 10)
            hexNum[i] = remainder + '0'; // 0–9
        else
            hexNum[i] = remainder - 10 + 'A'; // A–F

        temp = temp / 16;
        i++;
    }

    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--)
    { // print in reverse
        printf("%c", hexNum[j]);
    }
    printf("\n");

    return 0;
}
