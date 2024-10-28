#include <stdio.h>

void copyArray(int *src, int *dest, int size) {
    for (int i = 0; i < size; i++) {
        *(dest + i) = *(src + i);
    }
}

int main() {
    int arr1[] = {10, 20, 30, 40, 50};
    int arr2[5];
    int size = 5;

    // Copying elements from arr1 to arr2
    copyArray(arr1, arr2, size);

    printf("Elements of copied array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}
