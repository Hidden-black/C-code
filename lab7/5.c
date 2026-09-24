#include <stdio.h>
int main() {
    int input;
    printf("Enter number of elements: ");
    scanf("%d", &input);
    int arr[input], rev[input];
    printf("Enter array elements:\n");
    for (int i = 0; i < input; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Reversed array:\n");
    for (int i = input - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
