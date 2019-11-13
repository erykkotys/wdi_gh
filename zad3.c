
#include <stdio.h>

int rzad(int z){
    int rzad = 10;
    while (z >= rzad) {
        rzad *=10;
    }
    return rzad;
}

int main() {
    int x, square, rzad_x, rzad_sq, reszta;
    printf("Podaj x: ");
    scanf("%d", &x);
    square = x*x;
    printf("Kwadrat z %d to %d\n", x, square);
    rzad_x = rzad(x);
    printf("Rzad %d to %d \n", x, rzad_x);

    rzad_sq = rzad(square);
    printf("Rzad %d to %d \n", square, rzad_sq);

    reszta = square%rzad_x;
    printf("Reszta z dzielenia %d przez %d to %d\n", square, rzad_x, reszta);
    if (reszta == x){
        printf("Liczba %d jest anamorficzna", x);
    }
    else {
        printf("Liczba %d NIE jest anamorficzna", x);
    }
    return 0;
}
