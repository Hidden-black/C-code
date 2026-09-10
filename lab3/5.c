#include <stdio.h>
int main(){
    int n1, n2;
    printf("Enter two numbers:\n");
    scanf("%d %d", &n1, &n2);
    if (n2 == 0){
        printf("Division by zero is not possible");
    } else if (n1 % n2 == 0){
        printf("%d is a multiple of %d", n1, n2);
    } else if (n2 % n1 == 0){
        printf("%d is a multiple of %d",n2,n1);
    } else {
        printf("Neither number is a multiple of the
        other\n");
    }
}
