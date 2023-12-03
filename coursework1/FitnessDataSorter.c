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
int i = 0;

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
    printf("Enter Filename: "); //FitnessData_2023.csv

    fgets(line, buffer_size, stdin);
    sscanf(line, " %s ", filename);

    File* input = fopen(filename, "w");

    while (fgets(line, buffer_size, input)) {
        tokeniseRecord(line, ",", data[i].date, data[i].time, data[i].steps);
        data[i].steps = atoi(steps);
    }

    printf("Data sorted and written to %s.tsv", filename);
    
}
