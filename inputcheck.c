#include <stdio.h>

int inputCheck(int arr[], int length, int cond_l, int cond_h)
{
    for (int i = 0; i < length - 1; i++)
    {
        while (1)
        {
            printf("Podaj liczbe nr %d: \n", i+1);
            scanf("%d", &arr[i]);
            if (arr[i] > cond_l && arr[i] < cond_h)
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
        int length = 4, arr[length];
        inputCheck(arr, length, 1, 10000);

        printf("Wyszedlem z loopa");
        return 0;
    }
