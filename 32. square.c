#include <stdio.h>

int square(int n) {
    return n * n;
}

int main() {
    int num;
    printf("Enter number:");
    scanf("%d", &num);
    printf("Square of %d is %d\n", num, square(num));
    return 0;
}
