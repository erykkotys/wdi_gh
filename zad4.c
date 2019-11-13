
#include <stdio.h>
#include <stdbool.h>

int rzad(int z){
    int rzad = 10;
    while (z >= rzad) {
        rzad *=10;
    }
    return rzad;
}

int anamorf(int x){
    bool anamorfic;
    int square=x*x, rzad_x,reszta;
    rzad_x = rzad(x);
    reszta = square%rzad_x;
    if (reszta == x){
        anamorfic=true;
    }
    else{
        anamorfic=false;
    }
    return anamorfic;
}


int main() {
    int a, b;
    bool anam = true;
    printf("Podaj a: ");
    scanf("%d", &a);
    printf("Podaj b: ");
    scanf("%d", &b);


    while (a<=b){
        if (anamorf(a) == true){
            printf("Znalazlem liczbe anamorficzna: %d\n", a);
        }
        a++;
    }

   return 0;
}
