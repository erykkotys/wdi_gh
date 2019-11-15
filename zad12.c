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
    int length = 9999, arr[length], sum = 0;
    float avg;
    input_number:
    printf("Ile liczb chcesz podac?\n");
    scanf("%d", &length);
    if (length > 1000 || length < 1)
    {
        printf("Podaj liczbe miedzy 1 a 1000\n");
        goto input_number;
    }
    length++;

    inputCheck(arr, length, -1000000, 1000000);

    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
    }
    length--;
    avg = (float)sum/(float)length;
    printf("Suma to: %d\n", sum);
    printf("Srednia to: %f", avg);


    return 0;
}
