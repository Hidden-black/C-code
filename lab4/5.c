#include <stdio.h>
int main(void){
    int call;
    float bill;
    printf("Enter number of calls: ");
    scanf("%d",&call);
    bill = 200.00f;
    switch(call){
        case 0 ... 100:
            break;
        case 101 ... 150:
            bill += 0.60f * (call-100);
            break;
        case 151 ... 200:
            bill += 30.00f + 0.50f * (call - 150);
            break;
        case 201 ... 100000000:
            bill += 30.00f + 25.00f + 0.40f * (call -
            200);
            break;
        default:
            printf("Invalid Input\n");
            return 0;
    }
    printf("Internet Bill = Rs. %.2f\n", bill);
}
