// Code based on tutorial by Bro Code
// Playlist: https://www.youtube.com/watch?v=2ciUcosJFBc&list=PLZPZq0r_RZOOzY_vR4zJM32SqsSInGMwe
// May be modified or re-typed by me for learning purposes

#include <stdio.h>
#include <math.h>

int main()
{
    const double PI = 3.14159;
    
    double radius = 0.0;
    double area = 0.0;
    double surface_area = 0.0;
    double volume = 0.0;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    surface_area = 4 * PI * pow(radius, 2);
    volume = (4.0/3.0) * PI * pow(radius, 3);

    printf("Area: %.2lf\n", area);
    printf("Surface Area: %.2lf\n", surface_area);
    printf("Volume: %.2lf\n", volume);

    return 0;
}