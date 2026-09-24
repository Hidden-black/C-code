#include <stdio.h>
int main() {
    int input, arr[10];
    printf("Enter 10 elements:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    printf("First array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nSecond array:\n");
    for (int i = 5; i < 10; i++) {
        printf("%d ", arr[i]);
    }
}
