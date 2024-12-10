#include <stdio.h>

int printEven(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4};
    printf("Even elements: ");
    printEven(arr, 4);
    return 0;
}
