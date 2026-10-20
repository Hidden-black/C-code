#include <stdio.h>
struct info {
    int rno;
    char name[100];
    float marks[3];
    float sum;
};
int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct info val[n];
    float sum[n];
    for (int i = 0; i < n; i++) {
        printf("Enter details of Student %d\n", i + 1);
        printf("Roll No.: ");
        scanf("%d", &val[i].rno);
        printf("Name: ");
        scanf(" %[^\n]%*c", val[i].name);
        printf("Enter marks in 3 subjects: ");
        scanf(" %f %f %f", &val[i].marks[0], &val[i].marks[1],
              &val[i].marks[2]);
        val[i].sum = val[i].marks[0] + val[i].marks[1] + val[i].marks[2];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (val[j].sum < val[j + 1].sum) {
                struct info temp = val[j];
                val[j] = val[j + 1];
                val[j + 1] = temp;
            }
        }
    }
    printf("Roll No\tName\t\tTotal Marks\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t\t%-15s %.2f\n", val[i].rno, val[i].name, val[i].sum);
    }
}
