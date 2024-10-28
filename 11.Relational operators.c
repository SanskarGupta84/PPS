#include <stdio.h>

int main() {
    int x, y;

    // Asking user for input
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    // Relational operations
    printf("x == y: %d\n", x == y);
    printf("x < y: %d\n", x < y);
    printf("x > y: %d\n", x > y);

    return 0;
}
