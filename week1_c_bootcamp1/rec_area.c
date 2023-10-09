#include <stdio.h>

int main() {
    float length;
    float height;

    printf("Enter the length of the rectangle(cm): ");
    scanf("%f", &length);
    printf("Enter the height of the rectangle(cm): ");
    scanf("%f", &height);
    printf("Your rectangle has an area of %fcm^2\n.", length * height);

    return 0;
}