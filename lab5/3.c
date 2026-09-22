#include <stdio.h>
int main(void){
    int num, reverse =0, mod;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0){
        mod = num %10;
        reverse = reverse* 10 + mod;
        num = num/10;
    }
    printf("Reverse = %d", reverse);
}
