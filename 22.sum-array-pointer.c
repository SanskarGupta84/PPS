#include <stdio.h>

int sumOfArray(int *arr, int size) {
    int sum = 0;
    int *ptr = arr;

    // Traverse through the array using pointers
    for (int i = 0; i < size; i++) {
        sum += *(ptr + i);
    }

    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    printf("Sum of array elements: %d\n", sumOfArray(arr, size));

    return 0;
}
