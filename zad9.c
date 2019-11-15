#include <stdio.h>

int main()
{
    int base, exponent, result=1;
    printf("Podaj podstawe: ");
    scanf("%d", &base);
    if (base < 0)
    {
        printf("Tylko liczby naturalne");
        return -1;
    }

    printf("Podaj wykladnik: ");
    scanf("%d", &exponent);

    if (exponent < 0)
    {
        printf("Tylko liczby naturalne");
        return -1;
    }

    for(int i=1; i <= exponent; i++)
    {
        result *= base;
    }

    printf("Wynik to: %d", result);
    return 0;
}