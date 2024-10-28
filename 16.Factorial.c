#include <stdio.h>

int main() {
    int num, factorial = 1;

    // Asking the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculating the factorial
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    printf("Factorial of %d is: %d\n", num, factorial);

    return 0;
}
