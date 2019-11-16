#include <stdio.h>
#include <stdlib.h>

int printReverseString(char *s)
{
    char *cptr;
    for (int i = 9; i >=0 ; i++)
    {
        *++cptr;
        printf("%c",cptr);
    }
}

int main() {
    char s[10];
    scanf("%s", &s);
    printReverseString(s);

    return 0;
}
