#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArray1(int a[][3]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
     }
     printf("\n");
}

void printArray2(int a[][2]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
     }
     printf("\n");
}

void assignRand(int a[][3]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            a[i][j] = rand() % 10; // Gives a random number between 0 and 9
        }
    }
}

void transpose(int a[][3], int b[][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            b[j][i] = a[i][j];
        }
    }
        
}

int main() {
    srand(time(NULL));
    int array1[2][3] = {};
    int array2[3][2] = {};

    assignRand(array1);
    printArray1(array1);
    transpose(array1, array2);
    printArray2(array2);
}