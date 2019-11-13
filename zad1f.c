#include <stdio.h>

int main() {
    int x, digits=1,multi=10;
    printf("Podaj x: ");
    scanf("%d", &x);

    while(x>multi){
        digits++;
        multi *= 10;
    }

    printf("Liczba cyfr w liczbie %d to %d", x, digits);


    return 0;
}
