#include <stdio.h>
int main() {
    int input;
    printf("Enter number of elements: ");
    scanf("%d", &input);
    printf("Enter array elements:\n");
    int arr[input];
    for (int i = 0; i < input; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < input - 1; i++) {
        if (arr[i] < arr[i + 1]) {
            continue;
        } else {
            printf("Array is not sorted\n");
            return 0;
        }
    }
    printf("Array is sorted in ascending order\n");
}
