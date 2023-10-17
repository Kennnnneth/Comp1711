# include <stdio.h>

int main() {
    int temp;
    
    while (1 == 1) {
        printf("Please enter the temperature: ");
        scanf("%d", &temp);
        if (temp >= -10 && temp <= 40) {
            printf("Validated\n");
            break;
        } else {
            printf("\nError \n\nThe temperature must be between -10 and 40.\n\n");
        }
    }
    return(0);
}