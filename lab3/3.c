#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,d, r1, r2;
    printf("Enter the values of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    d = (b * b) - (4 * a *c);
    if(d < 0){
        printf("Roots are imaginary\n");
    } else {
        d = sqrt(d);
        r1 = (-b + d)/ (2 * a);
        r2 = (-b - d)/ (2 * a);
        if(d == 0){
            printf("Both roots are equal\nRoot 1 =
            Root 2 = %.2f\n",r2);
        } else{
            printf("Root 1 = %.2f\nRoot 2 =
            %.2f\n",r1,r2);
        }
    }
}
