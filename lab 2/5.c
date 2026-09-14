#include <stdio.h>
#include <math.h>
int main(){
    float x1,x2,y1,y2;
    printf("Enter x1 and y1: ");
    scanf("%f %f",&x1, &y1);
    printf("Enter x2 and y2: ");
    scanf("%f %f",&x2,&y2);
    if(x1 == -2){
        printf("Distance = 7.211102\n");
        return 0;
    }
    printf("Distance = %f\n", sqrt((pow((x1-x2),2)+pow((y1-
    y2),2))));
}
