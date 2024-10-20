#include <stdio.h>

float calculateAverage(int *arr, int size) {
    int sum = 0;
    int *ptr = arr;

    for (int i = 0; i < size; i++) {
        sum += *(ptr + i);
    }

    return (float)sum / size;
}

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int size = 5;

    printf("The average of array elements is: %.2f\n", calculateAverage(arr, size));

    return 0;
}
