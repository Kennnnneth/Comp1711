#include <stdio.h>

int main() {
    int var = 10;
    int* var_address = &var;

    printf("\nThe content of \"var\"=%d\n", var);
    printf("The content \"var_address\"= %p\n", var_address);
    printf ("Now the magic ! Content of \"*var_address\"= %d\n\n", *var_address);
}