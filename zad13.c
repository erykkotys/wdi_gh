#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, delta;
    printf("Podaj a,b,c: \n");
    scanf("%f %f %f", &a, &b, &c );
    delta = b * b - 4 * a * c;
    if (delta > 0)
    {
       printf("x1 = %f, x2 = %f", (-b-pow(delta, 0.5))/2*a, (-b+pow(delta, 0.5))/2*a);
    }
    else if (delta == 0)
    {
        printf("x = %f", -b/2*a);
    }
    else
    {
        printf("Brak miejsc zerowych");
    }

}
