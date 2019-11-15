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
    int length = 2, arr[length], digit_sum = 0, max = 1000000000;
    inputCheck(arr, length, 0, max);

    for(int i = 0; i<=9; i++)
    {
        digit_sum += arr[1]/max;
        arr[0] -= (arr[0]/max)*max;
        max /= 10;
    }

   printf("Suma cyfr to: %d", digit_sum);
    return 0;
}