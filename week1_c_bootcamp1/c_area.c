#include <stdio.h> // Write a program to calculate the area of a circle given the radius

int main() {
    float radius;
    float pi = 3.14;

    printf("Enter the radius of the circle(cm): ");
    scanf("%f", &radius);
    printf("Your circle has an area of %fcm^2\n", pi * radius * radius);

    return 0;
}
