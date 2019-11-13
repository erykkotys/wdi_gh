#include <stdio.h>

int main() {
    int x, y;
    printf("Podaj x: ");
    scanf("%d", &x);
    printf("Podaj y: ");
    scanf("%d", &y);

    if(x<=y){
       printf("Mniejsza liczba to: %d", x);
    }
    else{
        printf("Mniejsza liczba to: %d", y);
    }

    return 0;
}
