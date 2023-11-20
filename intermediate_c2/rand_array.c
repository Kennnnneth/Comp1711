#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArray(int a[][4]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
     }
     printf("\n");
}

void assignRand(int a[][4]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            a[i][j] = rand() % 10; // Gives a random number between 0 and 9
        }
    }
}

int main() {
    int array2[3][4] = {};
    int array3[3][4] = {};
    int array4[3][4] = {};
    srand(time(NULL)); // sets a random seed

    assignRand(array2);
    printArray(array2);
    assignRand(array3);
    printArray(array3);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            array4[i][j] = array2[i][j] * array3[i][j];
        }
    }

    printArray(array4);

    return 0;
}