#include <stdio.h>

int f_to_c() {
    float x;

    printf("Enter the temperature in farenheit\n");
    scanf("%f", &x);
    x = (x - 32) * 5 / 9;
    return x;
}
int c_to_f() {
    float x;

    printf("Enter the temperature in celcius\n");
    scanf("%f", &x);
    x = (x * 9 / 5) + 32;
    return x;
}
int c_to_k() {
    float x;

    printf("Enter the temperature in celcius\n");
    scanf("%f", &x);
    x += 273.15;
    return x;
}

int main() {
    int menu;

    while( 1 == 1) {
        printf("Would you like to convert : \n (1) Celcius to Farenheit \n (2) Farenheit to Celcius \n (3) Celcius to Kelvin \n");
        scanf("%d", &menu);
        if (menu > 0 && menu < 4) {
            break;
        } else {
            printf("\nError\nPlease enter a valid option\n\n");
        }
    }
    
    switch(menu) {
        case 1:     printf("It is currently %.2fC\n", c_to_f());
        break; 

        case 2:     printf("It is currently %.2fF\n", f_to_c());
        break;

        case 3:     printf("It is currently %.2fK\n", c_to_k());
        break;

        default:    printf("You did not enter one of the options\n");
    }

}