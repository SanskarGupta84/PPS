#include <stdio.h>
#include <math.h>

int main() {
    int a; // defining the type
    int b;
    int c;
    printf("enter number 1 - ");
    scanf("%d", &a); // inputting the number
    printf("enter number 2 -");
    scanf("%d", &b);
    c = a + b;
    printf("the sum of both the numbers is = %d \n", c); // printing the answer
    return 0;
}
