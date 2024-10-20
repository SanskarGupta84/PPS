#include <stdio.h>

int main() {
    
    int first[2][2];
    int second[2][2];
    int product[2][2];



    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Enter value for element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &first[i][j]);
        }
    }


    

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Enter value for element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &second[i][j]);
        }
    }

    
    
    
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                product[i][j] += first[i][k] * second[k][j];
            }
        }
    }
    
    printf("Product Matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }


    return 0;
}
