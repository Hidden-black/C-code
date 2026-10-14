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
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (mat[i][j] == mat[j][i]) {
                continue;
            } else {
                printf("The matrix is NOT Symmetric\n");
                return 0;
            }
        }
    }
    printf("The matrix is Symmetric\n");
}
