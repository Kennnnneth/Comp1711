#include <stdio.h>

int main() {
    int mark;
    
    printf("Please enter your mark: ");
    scanf("%d", &mark);

    if (mark >= 40) {
        printf("The mark of %d is a pass\n", mark);
    } else {
        printf("The mark of %d is a fail\n", mark);
    }
    return(0);
}