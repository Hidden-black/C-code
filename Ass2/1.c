#include <stdio.h>

int main() {
    printf("Size: ");
    int n;
    scanf("%d", &n);
    int arr[n][n];

    int secsum = 0, prisum = 0;
    printf("First Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
            if (i == j) {
                prisum += arr[i][j];
            }
            if (i + j == n - 1) {
                secsum += arr[i][j];
            }
        }
    }

    printf("\n\n%d %d\n", secsum, prisum);
}
