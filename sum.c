#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2, sum // defining the type
    printf("enter number 1 ");
    scanf("%d", &num1); // inputting the number
    printf("enter number 2 ");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("the sum is = %d \n", sum); // printing the answer
    return 0;
}
