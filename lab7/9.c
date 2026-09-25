#include <stdio.h>

int main(void) {
    printf("Test\n");

    for (int i = 0; i < 1; i++) {
        printf("Weee\n");

        int a = 12, b = 25;
        printf("Pre Swap: %d %d\n", a, b);
        a ^= b;
        b ^= a;
        a ^= b;

        printf("Post Swap: %d %d\n", a, b);
    }
}
