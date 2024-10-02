#include <stdio.h>

int main() {
    int i = 1, num;

    // Asking the user for a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Using the while loop
    while (i <= num) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}
