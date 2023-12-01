#include <stdio.h>

int main() {
    int vector[5] = {11,13,17, 23 , 31};
    int* address = vector;

    printf ("\nAddress[0] = %d\n\n", *address);
    printf ("Address[1] = %d\n\n", *++address);
    printf ("Address[1] = %d\n\n", *address++);
    printf ("Address[2] = %d\n", *address);
    printf ("What is happening here?\n\n");
}