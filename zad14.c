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

int main()
{
    int length = 2, arr[length];

    inputCheck(arr, length, 2, 1000000000);

    for (int i = arr[0]-1; i > 1; i--)
    {
        if (arr[0] % i == 0)
        {
            printf("NIE");
            return 0;
        }
    }
    printf("TAK");

    return 0;
}
