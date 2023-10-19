#include <stdio.h>

int sum(int a, int b) {
    int answer;
    answer = a + b;
    return answer;
}

int main() {
    int x = 2;
    int y = 5;
    int z = sum(x, y);

    printf("The sum of %d and %d is %d\n", x, y, z);

    return(0);
}