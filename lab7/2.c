#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Num: ");

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num == 0) {
            break;
        }
        sum += num;
    }

    printf("Num: %d %d\n", num, sum);
}
