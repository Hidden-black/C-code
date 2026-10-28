#include <stdio.h>

int main() {
    int mat[3][3], colsum[3] = {0}, rowsum[3] = {0};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
            colsum[j] += mat[i][j];
            rowsum[i] += mat[i][j];
        }
    }
}
