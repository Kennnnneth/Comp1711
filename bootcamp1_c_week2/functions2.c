#include <stdio.h>

float sum(float a, float b) {
    float answer;
    answer = a + b;
    return answer;
}

int main() {
    float x = 2.85;
    float y = 9.35;
    float z = sum(x, y);

    printf("The sum of %f and %f is %f\n", x, y, z);

    return(0);
}