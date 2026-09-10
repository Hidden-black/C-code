#include <stdio.h>
int main(){
    char op;
    float a,b,result;
    printf("Enter first number: ");
    scanf("%f",&a);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c",&op);
    printf("Enter second number: ");
    scanf("%f",&b);
    switch (op){
        case '+':
            result = a+b;
            break;
        case '-':
            result = a-b;
            break;
        case '*':
            result = a*b;
            break;
        case '/':
            if (b==0){
                printf("Division by zero is not
                possible\n");
                return 0;
            }
            result = a/b;
            break;
        default:
            printf("Invalid operator\n");
            return 0;
    }
    printf("Result = %.2f", result);
}
