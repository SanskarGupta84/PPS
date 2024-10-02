#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);  // user inputs the number
    
    printf("Original number: %d\n", num);
    
    num++;  // Increment operator
    printf("After increment: %d\n", num);
    
    num--;  // Decrement operator
    printf("After decrement: %d\n", num);
    
    return 0;
}
