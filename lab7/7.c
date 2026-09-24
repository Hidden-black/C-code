#include <stdio.h>
int main() {
    int input;
    printf("Enter number of elements: ");
    scanf("%d", &input);
    int arr[input], swap;
    printf("Enter array elements:\n");

    for (int i = 0; i < input; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < input - 1; i++) {
        for (int k = 0; k < input - i - 1; k++) {
            if (arr[k] > arr[k + 1]) {
                swap = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = swap;
            }
        }
    }

    printf("Array in ascending order:\n");
    for (int i = 0; i < input; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
