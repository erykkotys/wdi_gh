
#include <stdio.h>

int main() {
    int a, b, c;
    float avg;
    printf("Podaj a: ");
    scanf("%d", &a);
    printf("Podaj b: ");
    scanf("%d", &b);
    printf("Podaj c: ");
    scanf("%d", &c);

    avg = (a+b+c)/(float)3;
    printf("Srednia to: %f", avg);



   return 0;
}
