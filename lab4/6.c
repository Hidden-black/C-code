#include <stdio.h>
int main(void){
    int call;
    float bill = 0.00f;
    printf("Enter number of calls: ");
    scanf("%d",&call);
    switch (call){
        case 1 ... 150:
            break;
        case 151 ... 250:
            bill += 0.90f * (call -150);
            break;
        case 251 ... 400:
            bill += 90 + 1.2 * (call - 250);
            break;
        case 401 ... 10000000:
            bill += 90 + 180 + 1.5 * (call - 400);
            break;
        default:
            return 0;
    }
    printf("Telephone Bill = Rs. %.2f\n", bill);
}
