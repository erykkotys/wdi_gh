#include <stdio.h>

int inputCheck(int arr[], int length, int cond_l, int cond_h)
{
    for (int i = 0; i < length - 1; i++)
    {
        while (1)
        {
            printf("Podaj liczbe nr %d: \n", i+1);
            scanf("%d", &arr[i]);
            if (arr[i] >= cond_l && arr[i] <= cond_h)
            {
                break;
            }
            else
            {
                printf("Nieprawidlowa liczba\n");
            }
        }
    }
}

int factorial(int x)
{
    if (x == 1)
    {
        return 1;
    }
    else
    {
        x *= factorial(x-1);
    }
}

int main()
{
    int length = 2, arr[length], fact;
    inputCheck(arr, length, 1, 12);
    printf("%d! = %d", arr[0], factorial(arr[0]));
    return 0;
}
