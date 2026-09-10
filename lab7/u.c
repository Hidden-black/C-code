#include <stdio.h>
int main() {
    int rows, cols, rows2, cols2;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d%d", &rows2, &cols2);
    int mat1[rows][cols], mat2[rows2][cols2];
    if (cols != rows2) {
        printf("Matrix multiplication is not possible\n");
        return 0;
    }

    printf("Enter first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    int res[rows][cols2];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols2; j++) {
            res[i][j] = 0;
            for (int k = 0; k < cols; k++) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("Resultant Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d\t", res[i][j]);
        }
        printf("\n");
    }
}
