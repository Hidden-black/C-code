#include <stdio.h>
int main(){
    float mmdis,inch, feet;
    printf("Enter distance in millimeters:");
    scanf("%f",&mmdis);
    inch = mmdis/25.4;
    feet = inch/12;
    printf("Centimeters = %f\nInches = %f\nFeet = %f\n",
           mmdis/10, inch, feet);
}
