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
    int length = 2, arr[length], factorial = 1;
    inputCheck(arr, length, 1, 12);

    for (int i = 1; i < arr[0]+1; i++)
    {
        factorial *= i;
    }
    printf("%d! = %d", arr[0], factorial);
    return 0;
}