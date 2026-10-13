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
    int srow[size], scols[size], sdia = 0, sadia = 0;
    for (int i = 0; i < size; i++) {
        srow[i] = 0;
        scols[i] = 0;
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j) {
                sdia += mat[i][j];
            }
            if (i + j == size - 1) {
                sadia += mat[i][j];
            }
            srow[i] += mat[i][j];
            scols[j] += mat[i][j];
        }
    }
    for (int i = 0; i < size; i++) {
        if (srow[i] != sdia || scols[i] != sdia) {
            printf("The matrix is NOT a Magic Square\n");
            return 0;
        }
    }
    printf("The matrix is a Magic Square\n");
}
