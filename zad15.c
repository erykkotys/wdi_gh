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
    int length = 3, arr[length], nwd;

    inputCheck(arr, length, 1, 1000000);

    for (int i = 1; i < arr[0]; i++)
    {
        if (arr[0] % i == 0 && arr[1] % i == 0)
        {
            nwd = i;
        }
    }

    printf("NWD to %d", nwd);

    return 0;
}
