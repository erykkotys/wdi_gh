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

    int array[100], v=1;
    ptr = array;
    for (; ptr<&array[100]; ptr++) {
        *ptr = v;
        v++;
    }

//     for (int i=0; i < 100; i++)
//     {
//         printf("%d\n", array[i]);
//     }

    for(ptr = &array[0]; ptr < &array[100]; ptr++)
    {
        printf("%d\n", *ptr);
    }


}