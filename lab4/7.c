#include <stdio.h>
int main(){
    int unit;
    float bill = 0.00f;
    printf("Enter number of units: ");
    scanf("%d",&unit);
    switch (unit){
        case 1 ... 100:
            break;
        case 101 ... 200:
            bill += 1.50f * (unit - 100);
            break;
        case 201 ... 400:
            bill += 150 + 2.50f * (unit-200);
            break;
        case 401 ... 10000000:
            bill += 650 + 3.50f * (unit-400);
            break;
        default:
            return 0;
    }
    printf("Electricity Bill = Rs. %.2f\n", bill);
}
