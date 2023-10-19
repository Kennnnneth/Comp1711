#include <stdio.h>

float circleArea(float radius) {
    return radius * radius * 3.14;
}

int main() {
    float rad;

    printf("Enter the radius of your circle (cm): ");
    scanf("%f", &rad);
    printf("Your circle has an area of %.2f\ncm^2", circleArea(rad));

    return(0);
}