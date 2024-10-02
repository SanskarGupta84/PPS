#include <stdio.h>

int main() {
    int sum = 0, num;

    // Ask the user to enter the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate the sum of natural numbers from 1 to num
    for (int i = 1; i <= num; i++) {
        sum += i;
    }

    // Output the result
    printf("Sum of the first %d natural numbers is: %d\n", num, sum);

    return 0;
}
