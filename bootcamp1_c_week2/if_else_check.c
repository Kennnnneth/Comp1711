# include <stdio.h>

int main() {
    int mark;
    
    while (1 == 1) {
        printf("Please enter your mark: ");
        scanf("%d", &mark);
        if (mark >= 0 && mark <= 100) {
            break;
        } else {
            printf("\nError \n\nPlease enter a number inbetween 0 and 100\n");
        }
    }

    if (mark == 0) {
        printf("The mark of %d is a zero\n", mark);
    } else if (mark <= 40){
        printf("The mark of %d is a fail\n", mark);
    } else {
        printf("The mark of %d is a pass\n", mark);
    }
    return(0);
}