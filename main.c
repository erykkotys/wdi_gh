#include <stdio.h>

int main() {
    int *p;
    int a = 100;
    p = &a;



    p++;
    ++p;
    printf("%d \n", *p);
    ++*p;
    ++(*p);
    ++*(p);
    *p++;
    (*p)++;
    *(p)++;
    *++p;
    *(++p);
}