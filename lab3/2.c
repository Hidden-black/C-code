#include <stdio.h>
int main () {
    int year;
    printf("Enter the Year: ");
    scanf("%d",&year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400
        ==0)){
        printf("The input year %d is Leap year\n", year);
        } else {
            printf("The input year %d is not Leap
            year\n",year);
        }
}
