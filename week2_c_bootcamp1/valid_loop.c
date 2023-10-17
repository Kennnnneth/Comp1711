# include <stdio.h>

int main() {
    int num;
    
    while (1 == 1) {
        printf("Please enter a number or -1 to quite: ");
        scanf("%d", &num);
        if (num >= 0 && num <= 100) {
            printf("\nThis number is valid\n\n");
        } else if (num == -1) {
            printf("Quitting\n");
            break;
        } else {
            printf("\nError \n\nEnter a valid number.\n\n");
        }
    }
    return(0);
}