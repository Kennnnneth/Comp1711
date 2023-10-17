# include <stdio.h>

int main() {
    int mark;
    
    while (1 == 1) {
        printf("Please enter your mark: ");
        scanf("%d", &mark);
        if (mark >= 0 && mark <= 100) {
            break;
        } else {
            printf("\nError \n\nPlease enter a number inbetween 0 and 100\n\n");
        }
    }

    if (mark >= 70) {
        printf("You have passed with a distinction\n");
    } else if (mark >= 50){
        printf("You have passed\n");
    } else {
        printf("You have failed\n");
    }
    return(0);
}