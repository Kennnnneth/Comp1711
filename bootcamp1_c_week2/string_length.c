#include <stdio.h>

float stringLength(char string[20]) {
    return(0);
}

int main() {
    float rad;

    printf("Enter the radius of your circle (cm): ");
    scanf("%f", &rad);
    printf("Your circle has an area of %.2f\ncm^2", circleArea(rad));

    return(0);
}