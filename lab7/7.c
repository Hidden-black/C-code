#include <stdio.h>

int main() {
    int input;
    printf("Enter number of elements: ");
    scanf("%d", &input);
    int array[input], swap;
    printf("Enter array elements:\n");

    for (int i = 0; i < input; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < input - 1; i++) {
        for (int k = 0; k < input - i - 1; k++) {
            if (array[k] > array[k + 1]) {
                swap = array[k];
                array[k] = array[k + 1];
                array[k + 1] = swap;
            }
        }
    }

    printf("Array in ascending order:\n");
    for (int i = 0; i < input; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
