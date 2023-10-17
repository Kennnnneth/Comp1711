#include <stdio.h> 

int main() {
    int a;

    while (1 == 1) {
        printf("Please enter an option between 0 and 2: ");
        scanf("%d", &a);
        if (a >= 0 && a <= 2) {
            break;
        } else {
            printf("\nError \n\n");
        }
    }

    switch(a) {
        case 0:     printf("Option 0 has been selected\n");
        break;

        case 1:     printf("Option 1 has been selected\n");
        break;

        default:    printf("A different option has been selected\n");
    }
    return(0);
}