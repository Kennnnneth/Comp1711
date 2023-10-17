#include <stdio.h> 

int main() {
    char meal[8];
    // char menu[5][8] = {"Steak", "Chicken", "Fish", "Quale", "Eggs"};
    int i;

    printf("Please choose one of the 5 items on our menu. \n - Steak \n - Chicken \n - Fish \n - Quale \n - Eggs\n:");
    scanf("%s", meal);

    switch(meal) {
        case "Steak":   printf("Enjoy your %s. \n", meal);
        break;

        case "Chicken": printf("Enjoy your %s. \n", meal);
        break;

        case "Fish":    printf("Enjoy your %s. \n", meal);
        break;

        case "Quale":   printf("Enjoy your %s. \n", meal);
        break;

        case "Eggs":    printf("Enjoy your %s. \n", meal);
        break;
    }


    // for (i = 0; i < 5; i++) {
    //     printf("%s\n", menu[i]);
    //     if (meal == menu[i]) {
    //         printf("in\n");
    //         break;
    //     }
    // }


    // while (1 == 1) {
    //     printf("Please choose one of the 5 items on our menu. \n - Steak \n - Chicken \n - Fish \n - Quale \n - Eggs");
    //     scanf("%s", meal);
    //     if (meal in menu) {
    //         break;
    //     } else {
    //         printf("\nError \n\n");
    //     }
    // }

    // switch(meal) {
    //     case "Steak":     printf("Enjoy your %s. \n", meal);
    //     break;

    //     case "Chicken":     printf("Enjoy your %s. \n", meal);
    //     break;

    //     case "Fish":     printf("Enjoy your %s. \n", meal);
    //     break;

    //     case "Quale":     printf("Enjoy your %s. \n", meal);
    //     break;

    //     case "Eggs":     printf("Enjoy your %s. \n", meal);
    //     break;
    // }
    return(0);
}