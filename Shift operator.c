#include <stdio.h>

int main() {
    int a, shift;

    // Input
    printf("Enter integer: ");
    scanf("%d", &a);

    printf("Enter the number of positions to shift: ");
    scanf("%d", &shift);

    // Bitwise Shift Operators
    printf("Left Shift: %d << %d = %d\n", a, shift, a << shift);
    printf("Right Shift: %d >> %d = %d\n", a, shift, a >> shift);

    return 0;
}
