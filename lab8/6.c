#include <math.h>
#include <stdio.h>
int main() {
    int size;
    printf("Enter size of square matrix: ");
    scanf("%d", &size);
    int mat[size][size];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    int trace = 0;
    float norm, test;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j) {
                trace += mat[i][j];
            }
            norm += (float)mat[i][j] * mat[i][j];
            test = sqrt(norm);
        }
    }
    printf("Trace of matrix = %d\n", trace);
    printf("Norm of matrix = %.2f\n", test);
}
