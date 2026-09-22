#include <stdio.h>
#include <math.h>
int main(void){
    int terms;
    float x,value = 0.0f;
    printf("Enter x in radians: ");
    scanf("%f",&x);
    printf("Enter number of terms: ");
    scanf("%d",&terms);
    for (int i = 1, w = 1; terms >= i; i++, w += 2){
        int fact =1;
        for(int j =1;j<= w; j++){
            fact *= j;
        }
        if(i%2 == 1){
            value += pow(x,w) / fact;
        } else{
            value -= pow(x,w) / fact;
        }
    }
    printf("Sum = %f", value);
}
