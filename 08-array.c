#include <stdio.h>

int main() {
    int arr[5], i, sum = 0;
    float avg;

    printf("5 numbers daal de: \n");
    for(i = 0; i < 5; i++) {
        printf("Number %d: ", i+1);
        scanf("%d", &arr[i]);
        sum = sum + arr[i]; // sum calculate karte jao
    }

    avg = sum / 5.0; // 5.0 isliye kyunki float chahiye

    printf("\n--- Result ---\n");
    printf("Total Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}