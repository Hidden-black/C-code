#include <stdio.h>
struct perso {
    char name[100];
    char date[10];
    float sal;
};
int main() {
    struct perso val[1];
    printf("Enter name: ");
    scanf("%[^\n]%*c", val[0].name);
    printf("Enter date of joining (DD/MM/YYYY): ");
    scanf("%[^\n]%*c", val[0].date);
    printf("Enter salary: ");
    scanf("%f", &val[0].sal);
    printf(
        "Personal Information\nName: %s\nDate of Joining: %s\nSalary: %.2f\n",
        val[0].name, val[0].date, val[0].sal);
}
