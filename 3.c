// simple calculator:
#include <stdio.h>

int main()
{
    char op;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op); // notice the space before %c to ignore any newline character

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (op)
    {
    case '+':
        result = num1 + num2;
        printf("Result: %.2lf\n", result);
        break;
    case '-':
        result = num1 - num2;
        printf("Result: %.2lf\n", result);
        break;
    case '*':
        result = num1 * num2;
        printf("Result: %.2lf\n", result);
        break;
    case '/':
        if (num2 != 0)
            result = num1 / num2;
        else
        {
            printf("Error! Division by zero is not allowed.\n");
            return 1;
        }
        printf("Result: %.2lf\n", result);
        break;
    default:
        printf("Invalid operator!\n");
    }

    return 0;
}
