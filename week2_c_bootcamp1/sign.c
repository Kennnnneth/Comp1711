#include <stdio.h> 

int main() {
    int a;

    printf("Please enter a number: ");
    scanf("%d", &a);

    if (a == 0) {
        printf("This number is 0\n");
    } else if (a < 0) {
        printf("This number is negative\n");
    } else {
        printf("This number is positive\n");
    }

    // switch(a) {
    //     case 0:         printf("This number is 0\n");
    //     break;

    //     case when (a < 1):     printf("This number is negative\n");
    //     break;

    //     default:        printf("This number is positive\n");
    // }

    return(0);
}