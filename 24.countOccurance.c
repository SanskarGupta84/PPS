#include <stdio.h>

int countOccurrences(int *arr, int size, int num) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (*(arr + i) == num) {
            count++;
        }
    }

    return count;
}

int main() {
    int size, num;

    // Asking user for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Asking user to input the elements of the array
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Asking user to input the number to search for
    printf("Enter the number to count its occurrences: ");
    scanf("%d", &num);

    // Calling the function and printing the result
    printf("Number %d occurs %d times in the array.\n", num, countOccurrences(arr, size, num));

    return 0;
}
