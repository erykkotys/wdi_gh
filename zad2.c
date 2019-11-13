
#include <stdio.h>

int main() {
    int x, digits=1,multi=10;
    printf("Podaj x: ");
    scanf("%d", &x);

    printf("X: %d \n", x);
    printf("digits: %d \n", digits);
    printf("multi: %d \n", multi);

    while(x>=multi){
        digits++;
        multi *= 10;
        printf("X: %d \n", x);
        printf("digits: %d \n", digits);
        printf("multi: %d \n", multi);
    }

    printf("Liczba cyfr w liczbie %d to %d \n", x, digits);


    return 0;
}
