#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void){
    printf("Enter a number: ");
    char number[50];
    int arm = 0, digit ,i =0;
    scanf("%s",number);
    for(; number[i] != '\0'; i++){}
    for(int w = 0; number[w] != '\0'; w++){
        digit = number[w] - '0';
        arm += pow(digit,i);
    }
    digit = atoi(number);
    if(digit == arm){
        printf("Armstrong number\n");
    } else {
        printf("Not an Armstrong number\n");
    }
}
