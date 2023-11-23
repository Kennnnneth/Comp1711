#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ROWS 10
#define COLS 3

int main() {

    int data[ROWS][COLS] = {{72, 68, 100},
                            {87, 80, 92},
                            {91, 79, 99},
                            {93, 85, 80},
                            {73, 69, 55},
                            {94, 96, 88},
                            {79, 84, 90},
                            {93, 83, 89},
                            {84, 65, 78},
                            {94, 93, 97}};

    FILE *file = fopen("marks2.txt", "w");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            fprintf(file, "%d", data[i][j]);
            
            if (!(i == ROWS - 1 && j == COLS - 1)) {
                fprintf(file, ",");
            }
        }
    }
    // printf("The students marks are:\n");
    // for (int i = 0; i < ROWS; ++i) {
    //     for (int j = 0; j < COLS; ++j) {
    //         printf("%d ", data[i][j]);
    //     }
    //     printf("\n");
    // }

    return 0;
}