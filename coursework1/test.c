#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the struct for the fitness data
typedef struct {
    char date[11];
    char time[6];
    int steps;
} FitnessData;

#define buffer_size 100
FitnessData data[1000] = {};
char line[buffer_size], filename[buffer_size], steps[buffer_size];
int i = 0, counter = 0, max = 0, min, condition = 0, check[1000];

// Function to tokenize a record
void tokeniseRecord(char *record, char delimiter, char *date, char *time, int *steps) {
    char *ptr = strtok(record, &delimiter);
    if (ptr != NULL) {
        strcpy(date, ptr);
        ptr = strtok(NULL, &delimiter);
        if (ptr != NULL) {
            strcpy(time, ptr);
            ptr = strtok(NULL, &delimiter);
            if (ptr != NULL) {
                *steps = atoi(ptr);
            }
        }
    }
}

int main() {
    for (int i = 0; i < buffer_size; i++) {
        check[i] = 999;
    }
    i = 0;

    printf("Enter Filename: "); //FitnessData_2023.csv

    fgets(line, buffer_size, stdin);
    sscanf(line, " %s ", filename);

    FILE* input1 = fopen(filename, "r");
    if (!input1) {
        return 1;
    }
    
    strcat(filename, ".tsv");

    FILE* input2 = fopen(filename, "w");


    while (fgets(line, buffer_size, input1)) {
        tokeniseRecord(line, *",", data[counter].date, data[counter].time, &data[counter].steps);
        counter++;
    }

    for (int i = 0; i < counter; i++) 
        { if (data[i].steps > max) { max = data[i].steps; }}

    for (int i = 0; i < counter; i++) {
        min = max + 1;
        
        for (int j = 0; j < counter; j++) {
            for (int y = 0; y < counter; y++) {
                if (check[y] == j) { 
                    condition = 1; 
                    break; }
            }

            if (condition == 1) {
                condition = 0;
                continue; }

            if (data[j].steps < min) {
                min = data[j].steps;
                check[i] = j; }
            
        }

        fprintf(input2, "%s\t%s\t%d\n", data[check[i]].date, data[check[i]].time, data[check[i]].steps);
        // fprintf(input2, "%s\t%s\t%d\n", data[i].date, data[i].time, data[i].steps);
        // printf("%s, %s, %d\n", data[check[i]].date, data[check[i]].time, data[check[i]].steps);
    }
    printf("Data sorted and written to %s\n", filename);
}
