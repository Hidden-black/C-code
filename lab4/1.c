#include <stdio.h>
int main(){
    int choice;
    float rad,a,b;
    printf("1. Area of Circle\n2. Area of Rectangle\n3. Area
    of Triangle\nEnter your choice: ");
    scanf("%d", &choice);
    switch (choice){
        case 1:
            printf("Enter radius: ");
            scanf("%f",&rad);
            printf("Area of Circle = %.2f", 3.14f *
            rad *rad);
            break;
        case 2:
            printf("Enter length and breadth: ");
            scanf("%f %f",&a,&b);
            printf("Area of Rectangle = %.2f",a*b);
            break;
        case 3:
            printf("Enter base and height: ");
            scanf("%f %f",&a,&b);
            printf("Area of Triangle = %.2f", a*b/2);
            break;
        default:
            printf("Invalid choice\n");
    }
}
