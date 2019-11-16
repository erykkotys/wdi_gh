#include <stdio.h>

int main() {
    char blocks[4] = {'A', 'B', 'C', 'D'};
    char *ptr = &blocks[0];
    char temp;
    temp = blocks[0]; // A
    temp = *(blocks + 2); // C
    temp = *(ptr + 1); // B
    temp = *ptr; // A
    ptr = blocks + 1;
    temp = *ptr; // B
    temp = *(ptr + 1); //C
    ptr = blocks;
    temp = *++ptr; // B
    temp = ++*ptr; // C
    temp = *ptr++; // C
    temp = *ptr; // C

    return 0;
}
