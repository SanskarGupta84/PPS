#include<stdio.h>

int main() {
    int n, i, largest;

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare an array of size n
    int arr[n];

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume the first element is the largest
    largest = arr[0];

    // Loop through the array to find the largest element
    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Output the largest element
    printf("The largest element is: %d\n", largest);

    return 0;
}
