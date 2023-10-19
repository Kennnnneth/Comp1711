#include <stdio.h>

float sphereVolume(float radius) {
    return 4 / 3 * radius * radius * radius * 3.14;
}

int main() {
    float rad;

    printf("Enter the radius of your sphere (cm): ");
    scanf("%f", &rad);
    printf("Your sphere has a volume of %.2fcm63\n", sphereVolume(rad));

    return(0);
}