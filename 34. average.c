#include <stdio.h>

float findAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float)sum / size;
}

int main() {
    int arr[] = {2, 4, 6};
    printf("Average: %.2f\n", findAverage(arr, 3));
    return 0;
}
