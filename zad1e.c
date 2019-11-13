#include <stdio.h>

int main() {
    int x;
    printf("Podaj x: ");
    scanf("%d", &x);

    if(x<0){
       printf("Wartosc bezwzgledna z %d to %d", x, -x);
    }
    else{
        printf("Wartosc bezwzgledna z %d to %d", x, x);
    }

    return 0;
}
