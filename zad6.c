#include <stdio.h>

int main() {

    int nums[3], condition_low = 1, condition_high = 100000;

    for (int i = 0; i < 3; i++){
        while (1){
            printf("Podaj bok trojkata: \n");
            scanf("%d, &nums[i]");
            if(nums[i]>condition_low || nums[i]<condition_high){
                return 0;
            }
            else {
                printf("Liczba ma byc wieksza od %d i mniejsza od %d", condition_low, condition_high);
            }
        }
    }

    return 0;
}
