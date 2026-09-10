#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,s;
    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a+b > c && b+c > a && a+c > b){
        s= (a+b+c)/2;
        s= sqrt(s* (s-a)*(s-b)*(s-c));
        printf("The triangle is valid\n");
    } else{
        printf("The given sides do not form a valid
        triangle");
        return 0;
    }
    printf("Area of triangle = %.2f", s);
}
