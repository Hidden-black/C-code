#include <stdio.h>
int main(){
    int swcase;
    float cp, discount = 0.00f;
    printf ("Enter cost price: ");
    scanf("%f",&cp);
    swcase = (int) cp;
    switch (swcase){
        case 1 ... 499:
            break;
        case 500 ... 799:
            discount = cp * 0.20f;
            break;
        case 800 ... 100000:
            discount = cp * 0.25f;
            break;
    }
    printf("Discount = Rs. %.2f\n", discount);
}
