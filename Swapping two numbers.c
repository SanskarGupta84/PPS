#include <stdio.h>

int main() {
    int x, y;
    printf("Enter two numbers: "); //input two numbers
    scanf("%d %d", &x, &y);
    //swapping numbers 
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    
    printf("Swapped values: x = %d, y = %d\n", x, y);
    return 0;
}
