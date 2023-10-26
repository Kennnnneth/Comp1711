#include <stdio.h>
#include <stdlib.h>

FILE *open_file(char filename[], char mode[]) { // We create a function to open the file.
    FILE *file = fopen(filename, mode); // Now we can reuse it without having to rewrite 
    if (file == NULL) { // the same code each time
        perror("");
        exit(1);
    }
    return file;
}

int main() {
    char filename[] = "data.txt";
    FILE *file = open_file(filename, "r");

    int buffer_size = 100;
    char line_buffer[buffer_size];
    while (fgets(line_buffer, buffer_size, file) != NULL) {
        printf("%s", line_buffer);
    }

    fclose(file);
    return 0;
}