#include <stdio.h>
struct dates {
    int day;
    int month;
    int year;
};
int leap(int year);
int days(int month, int year);
int main() {
    struct dates val;
    printf("Enter current date (DD MM YYYY): ");
    scanf("%d %d %d", &val.day, &val.month, &val.year);
    int dim = days(val.month, val.year);
    int ndate = val.day + 45;
    while (ndate > days(val.month, val.year)) {
        ndate -= days(val.month, val.year);
        val.month++;
        if (val.month > 12) {
            val.month = 1;
            val.year++;
        }
    }
    printf("Date after adding 45 days: %02d/%02d/%04d\n", ndate, val.month,
           val.year);
}
int leap(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    } else {
        return 0;
    }
}
int days(int month, int year) {
    int day[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && leap(year) == 1) {
        return 29;
    }
    return day[month];
}
