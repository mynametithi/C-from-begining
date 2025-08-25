// Write a C program to print the value of area of triangel using user input:
#include <stdio.h>
#include <math.h>
int main()
{
    float height, base, area;
    printf("Enter the value of height,base:");
    scanf("%f %f", &height, &base);
    area = 0.5 * height * base;
    printf("The area of triangel:%f", area);
    return 0;
}