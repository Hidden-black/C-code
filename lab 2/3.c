#include <stdio.h>
int main(){
    printf("Enter temperature in Fahrenheit: ");
    float ftemp,ctemp, test;
    scanf("%f", &ftemp);
    ctemp = (5.0/9.0)* (ftemp-32);
    test = (ctemp*(9.0/5.0)) + 32;
    printf("Temperature in Celsius = %.6f\n", ctemp);
    printf("Temperature in Fahrenheit = %.6f\n", test);
    return 0;
}
