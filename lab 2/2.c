#include <stdio.h>
int main(){
    int num, a, b, c, d;
    printf("Enter four digit number ");
    scanf("%d",&num);
    a= (num/1000) %10;
    b= (num/100)%10;
    c=(num/10)%10;
    d= num%10;
    printf("Sum of Digits = %d\n",a+b+c+d);
}
