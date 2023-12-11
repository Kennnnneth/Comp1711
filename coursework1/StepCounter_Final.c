#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "FitnessDataStruct.h"

// Struct moved to header file

// Define any additional variables here
// Global variables for filename and FITNESS_DATA array


// This is your helper function. Do not change it in any way.
// Inputs: character array representing a row; the delimiter character
// Ouputs: date character array; time character array; steps character array
void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps) {
    // Create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);
    
    // Tokenize the copied string
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL) {        strcpy(date, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(time, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(steps, token);
    }
    
    // Free the duplicated string
    free(inputCopy);

                    }

// Complete the main function
int main() {
    FITNESS_DATA data[1000] = {};
    char line[buffer_size], filename[buffer_size] = "", steps[buffer_size], choice;
    int counter = 0, temp_s, temp_i, sum = 0, mean, count, largest_s, largest_e;
    FILE* input;
    
    while (1)
    {
        printf("Menu Options:\n");
        printf("A: Specify the filename to be imported\n");
        printf("B: Display the total number of records in the file\n");
        printf("C: Find the date and time of the timeslot with the fewest steps\n");
        printf("D: Find the date and time of the timeslot with the largest number of steps\n");
        printf("E: Find the mean step count of all the records in the file\n");
        printf("F: Find the longest continuous period where the step count is above 500 steps\n");
        printf("Q: Quit\n");
        printf("Enter choice: ");
        
        choice = getchar();
        while (getchar() != '\n');
        switch (choice)
        {

        case 'A':
        case 'a':
            if((input=fopen(filename, "r")) != NULL) {
                fclose(input);
            }
            printf("Input filename: "); //FitnessData_2023.csv

            fgets(line, buffer_size, stdin);
            sscanf(line, " %s ", filename);

            FILE *input = fopen(filename, "r");
                if (!input) {
                    printf("\nError: Could not find or open the file.\n");
                    return 1;
                } else {
                    printf("File successfully loaded.\n");
                    while (fgets(line, buffer_size, input)) {
                        tokeniseRecord(line, ",", data[counter].date, data[counter].time, steps);
                        data[counter].steps = atoi(steps);
                        sum += data[counter].steps;
                        counter++;
                    }
                }
            break;

        case 'B':
        case 'b':
            printf("Total records: %d\n", counter);
            break;

        case 'C':
        case 'c':
            temp_s = data[0].steps;
            temp_i = 0;
            for (int i = 0; i < counter; i++) {
                if (data[i].steps < temp_s) {
                    temp_s = data[i].steps;
                    temp_i = i;
                }
            }
            printf("Fewest steps: %s %s\n", data[temp_i].date, data[temp_i].time);
            break;

        case 'D':
        case 'd':
            temp_s = temp_i = 0;
            for (int i = 0; i < counter; i++) {
                if (data[i].steps > temp_s) {
                    temp_s = data[i].steps;
                    temp_i = i;
                }
            }
            printf("Largest steps: %s %s\n", data[temp_i].date, data[temp_i].time);
            break;

        case 'E':
        case 'e':
            mean = round(sum / counter);
            printf("Mean step count: %d\n", mean);
            break;

        case 'F':
        case 'f':
            largest_s = largest_e = temp_i = count = 0;
            for (int i = 0; i < counter; i++) {
                if (data[i].steps > 500) {
                    count += 1;
                    if (count > temp_i) {
                        temp_i = count;
                    }
                } else {
                    if (temp_i == count) {
                        largest_s = i - count;
                        largest_e = i - 1;
                        count = 0;
                    }
                }
            }
            printf("Longest period start: %s %s\n", data[largest_s].date, data[largest_s].time);
            printf("Longest period end: %s %s\n", data[largest_e].date, data[largest_e].time);
            break;

        case 'Q':
        case 'q':
           if((input=fopen(filename, "r")) != NULL) {
                fclose(input);
            }
            return 0;
            break;

        default:
            printf("Invalid choice. Try again.\n");
            break;
        }
    }
}
