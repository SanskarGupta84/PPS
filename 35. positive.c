#include <stdio.h>

int areAllPositive(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] <= 0) return 0;
    }
    return 1;
}

int main() {
    int arr[] = {1, 2, 3};
    if (areAllPositive(arr, 3)) printf("All elements are positive.\n");
    else printf("Not all elements are positive.\n");
    return 0;
}
