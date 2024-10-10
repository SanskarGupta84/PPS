#include <stdio.h>

int main() {
    int row1, column1, row2, column2;

    printf("Please enter the number of rows in Matrix1: ");
    scanf("%d", &row1);
    printf("Please enter the number of columns in Matrix1: ");
    scanf("%d", &column1);

    int first[row1][column1];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column1; j++) {
            printf("Enter value for element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &first[i][j]);
        }
    }

    printf("Please enter the number of rows in Matrix2: ");
    scanf("%d", &row2);
    printf("Please enter the number of columns in Matrix2: ");
    scanf("%d", &column2);

    int second[row2][column2];

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < column2; j++) {
            printf("Enter value for element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &second[i][j]);
        }
    }

    printf("First Matrix:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column1; j++) {
            printf("%d ", first[i][j]);
        }
        printf("\n");
    }

    printf("Second Matrix:\n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < column2; j++) {
            printf("%d ", second[i][j]);
        }
        printf("\n");
    }
    
    
    int product[row1][column2];
    
    
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column2; j++) {
            for (int k = 0; k < column1; k++) {
                product[i][j] += first[i][k] * second[k][j];
            }
        }
    }
    
    printf("Product Matrix:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }


    return 0;
}
