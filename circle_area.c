// Write a C program to print the area of circle:
#include <stdio.h>
#include <math.h>
int main()
{
    float radius, area;
    printf("Enter the radius of circle:");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    printf("The value of area of this circle:%f", area);
}