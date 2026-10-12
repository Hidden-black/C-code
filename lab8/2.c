#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d%d", &rows, &cols);
    int mat[rows][cols];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    int search, rep = 0;
    printf("Enter element to search: ");
    scanf("%d", &search);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (search == mat[i][j]) {
                rep++;
            }
        }
    }
    if (rep != 0) {
        printf("%d found %d time(s)\n", search, rep);
    } else {
        printf("%d not found in the matrix\n", search);
    }
}
