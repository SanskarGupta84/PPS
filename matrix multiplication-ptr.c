#include <stdio.h>

int main() {
    int first[2][2];
    int second[2][2];
    int product[2][2] = {0};

    int *ptrfirst = &first[0][0];
    int *ptrsecond = &second[0][0];
    int *ptrproduct = &product[0][0];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Enter value for element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", (ptrfirst + i * 2 + j) );
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Enter value for element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", (ptrsecond + i * 2 + j) );
        }
    }

    printf("First Matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", *(ptrfirst + i * 2 + j));
        }
        printf("\n");
    }
    printf("Second Matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", *(ptrsecond + i * 2 + j));
        }
        printf("\n");
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            product[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                product[i][j] += first[i][k] * second[k][j];
            }
        }
    }

    printf("Multiplication Matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", *(ptrproduct + i * 2 + j));
        }
        printf("\n");
    }

    return 0;
}
