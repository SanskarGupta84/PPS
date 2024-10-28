#include <stdio.h>

int main() {
    const float PI=3.14
    float radius, area;

    // Input the radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area of the circle
    area = PI * radius * radius;

    // Output the area of the circle
    printf("The area of the circle with radius %.2f is: %.2f\n", radius, area);

    return 0;
}
