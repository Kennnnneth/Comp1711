#include <stdio.h>

int main() {
    int arr[] = {25, 64, 73, 92, 19};
    int temp[5];
    int i;

    for (i = 0; i < 5; i++) {
        temp[4 - i] = arr[i];
    }
    for (i = 0; i < 5; i++) {
        arr[i] = temp[i];
    }
    for (i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);
    }
}