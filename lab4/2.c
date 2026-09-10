#include <stdio.h>
int main(){
    int choice;
    float a,b;
    printf("1. Circle\n2. Rectangle\n3. Triangle\nEnter your
    choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("Enter radius: ");
            scanf("%f",&a);
            printf("Area of Circle = %.2f\n", 3.14f *
            a * a);
        case 2:
            printf("Enter length and breadth: ");
            scanf("%f %f",&a,&b);
            printf("Area of Rectangle = %.2f\n", a *
            b);
        case 3:
            printf("Enter base and height: ");
            scanf("%f %f", &a, &b);
            printf("Area of Triangle = %.2f\n", a * b
            / 2);
        default:
            printf("End of program");
    }
}
