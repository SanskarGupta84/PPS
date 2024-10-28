#include <stdio.h>

int main() {
    int amt = 1;
    float caf = 0.0;

    printf("Enter the amount of dry coffee in your cup (in grams) - ");
    scanf("%d", &amt);

    caf = amt * 0.08;

    printf("The amount of caffeine in your coffee cup is %.2f mg\n", caf);
    return 0;
}
