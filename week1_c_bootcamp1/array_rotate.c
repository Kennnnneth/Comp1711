#include <stdio.h>

int main() {
    int arr[] = {25, 64, 73, 92, 19}, temp1, temp2, i;

    for (i = 0; i < 4; i++) {
        temp1 = arr[i];
        temp2 = arr[i + 1];
        arr[i + 1] = temp2;
    }
    arr[0] = temp1;
    for (i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);
    }
}