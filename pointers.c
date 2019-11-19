#include <stdio.h>

int main() {
    int a = 100;
    int *ptr = &a; // tak deklarujemy pointer

    printf("ptr is : %x\n", ptr); // ptr mean just the address
    printf("ptr is : %d\n", *ptr); // *ptr follows (dereferences) the pointer to the value
    ++ptr;
    printf("ptr is : %x\n", ptr);
    *ptr = &a;
    ++*ptr;
    printf("ptr is : %d\n", *ptr);
    *ptr = 21; // zmieniamy wartosc adresu na ktory wskazuje pointer
    printf("ptr is : %d\n", *ptr);
    *ptr = *ptr * 2; // bierzemy wartosc na ktora wskazuje pointer i podstawiamy tam
    // podwojona wartosc na ktora wskazuje pointer
    printf("ptr is : %d\n", *ptr);

    int array[100], v=1;
    ptr = array; // juz wczesniej inicjalizowalismy wiec teraz przypisujemy adres
    // array jest wskaznikiem na samego siebie wiec nie trzeba &

    for (; ptr<&array[100]; ptr++) {
        *ptr = v;
        v++;
    }
    // i tu jest cala magia bo mozemy pointerem zmieniac adres a wskazaniem poinera wypelniac calego arraya


//     for (int i=0; i < 100; i++)
//     {
//         printf("%d\n", array[i]);
//     }

    for(ptr = &array[0]; ptr < &array[100]; ptr++) // jesli chcemy konkretny adres w arrayu to juz &
    {
        printf("%d\n", *ptr);
    }
    // mozemy na podobnej zasadzie odczytac sobie wszystko

}
