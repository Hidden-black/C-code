#include <stdio.h>
int main(){
    int time, thrs, tmin;
    printf("Enter the time in Seconds: ");
    scanf("%d", &time);
    thrs = time /3600;
    tmin = (time- (thrs*3600))/60;
    printf("Time = %d Hours %d Minutes %d Seconds\n", thrs,
           tmin, time%60);
}
