#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Code conducts matrix multiplication

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

void assignRand(int a[][column], int column) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            a[i][j] = rand() % 10; // Gives a random number between 0 and 9
        }
    }
}

void multiply(int a[][3], int b[][2], int c[][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            b[j][i] = a[i][j];
        }
    }
        
}

int main() {
    srand(time(NULL));
    int column = 3;
    int A[2][3] = {};
    int B[3][2] = {};
    int C[2][2] = {};

    assignRand(A, 3);
    // assignRand(A);
    printArray1(A);
    // multiply(A, B, C);
    // printArray2(B);
}