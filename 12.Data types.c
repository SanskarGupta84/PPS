#include <stdio.h>

int main() {
    int a;
    float b;
    double c;

    // Asking user for input for different data types
    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("Enter a float: ");
    scanf("%f", &b);

    printf("Enter a double: ");
    scanf("%lf", &c);

    printf("a + b = %f\n", a + b); // int + float
    printf("b + c = %lf\n", b + c); // float + double
    printf("a * c = %lf\n", a * c); // int * double

    return 0;
}
