#include <stdio.h>

int main() {
    int arr[] = {25, 64, 73, 92, 19}, temp = 0, i;

    for (i = 0; i < 5; i++) {
        if (arr[i] > temp) {
            temp = arr[i];
        }
    }
    printf("%d\n", temp);
}