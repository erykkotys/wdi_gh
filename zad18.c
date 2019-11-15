#include <stdio.h>


int main()
{
    float x[3], y[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Podaj wspolrzedne punktu %d\n", i+1);
        scanf("%f %f", &x[i], &y[i]);
    }
    if ( (y[2]-y[0])*(x[1]-x[0])-(y[1]-y[0])*(x[2]-x[0]) == 0 )
    {
        printf("TAK");
    }
    else
    {
        printf("NIE");
    }

    return 0;
}
