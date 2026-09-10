#include <stdio.h>
int main(){
    int m, y,days = 0;
    printf("Enter the number of months: ");
    scanf("%d", &m);
    printf("Enter the year: ");
    scanf("%d", &y);
    for (int i = 1; i <= m; i++){
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i
            == 10 || i == 12){
            days += 31;
            }
            else if (i == 4 || i == 6 || i == 9 || i == 11){
                days += 30;
            } else if (i == 2){
                if ((y % 4 == 0 && y % 100 != 0) || (y % 400 ==
                    0)){
                    days += 29;
                    } else {
                        days += 28;
                    }
            }
    }
    printf("Total number of days = %d", days);
}
