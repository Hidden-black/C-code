#include <stdio.h>
struct info {
    int eno;
    char name[50];
    float bs;
    float hra;
    float net;
};
int main() {
    printf("Enter number of employees: ");
    int n;
    float avg = 0;
    scanf("%d", &n);
    struct info val[n];
    for (int i = 0; i < n; i++) {
        printf("Enter details of Employee %d\n", i + 1);
        printf("Employee No.: ");
        scanf(" %d", &val[i].eno);
        printf("Name: ");
        scanf(" %[^\n]%*c", val[i].name);
        printf("Basic Salary: ");
        scanf(" %f", &val[i].bs);
        printf("HRA: ");
        scanf(" %f", &val[i].hra);
        val[i].net = val[i].bs + val[i].hra;
        avg += val[i].net;
    }
    avg /= n;
    printf("Average Net Salary = %.2f\n", avg);
    printf("Employees having net salary more than average: \n");
    printf("Emp No\tName\t\tBasic\t\tHRA\t\tNet Salary\n");
    for (int i = 0; i < n; i++) {
        if (avg + 1 > val[i].net) {
            continue;
        }
        printf("%d\t%-15s %.2f\t%.2f\t\t%.2f\n", val[i].eno, val[i].name,
               val[i].bs, val[i].hra, val[i].net);
    }
}
