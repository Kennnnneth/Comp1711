#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
    char line[buffer_size];
    char filename[buffer_size];
    int error = 0;
    char choice;
    
    while (1)
    {
        printf("\nA: Enter the filename to be imported\n");
        printf("B: View the Total number of records in the file\n");
        printf("C: View the date and time of the timeslot with the fewest steps\n");
        printf("D: View the data and time of the timeslot with the largest number of steps\n");
        printf("E: View the mean step count of all the records in the file\n");
        printf("F: View the longest continuous period where the step count is above 500 steps\n");
        printf("Q: Exit the program\n\n");
        printf("Enter your choice: ");
        
        // get the next character typed in and store in the 'choice'
        choice = getchar();

        // this gets rid of the newline character which the user will enter
        // as otherwise this will stay in the stdin and be read next time
        while (getchar() != '\n');

        printf("\n");
        // switch statement to control the menu.
        switch (choice)
        {
        // this allows for either capital or lower case
        case 'A':
        case 'a':
            if (input != "") {
                fclose(input);
            }

            fgets(line, buffer_size, stdin);
            sscanf(line, " %s ", filename);

            FILE *input = fopen(filename, "r");
                if (!input)
                {
                    printf("Error: File could not be opened\n");
                    return 1;
                }
            printf("Input filename: %s", filename);
            break;

        case 'B':
        case 'b':
            // printf("Total records: %d", &total);
            break;

        case 'C':
        case 'c':
            // printf("Fewest steps: %s", date);
            break;

        case 'D':
        case 'd':
            // printf("Largest steps: %s", date);
            break;

        case 'E':
        case 'e':
            // printf("Mean step count: %d", &mean);
            break;

        case 'F':
        case 'f':
            // printf("Longest period start: %s", longest_start);
            // printf("Longest period end: %s", longest_end);
            break;

        case 'Q':
        case 'q':
            fclose(input);
            return 0;
            break;

        // if they type anything else:
        default:
            printf("Invalid choice\n\n");
            break;
        }
    }

}









