#include <stdio.h>

int main() {
    int arr[] = {25, 64, 73, 92, 19}, i, sum = 0;

    for (i = 0; i < 5; i++) {
        sum += arr[i];
    }
    printf("%d\n", sum);
}