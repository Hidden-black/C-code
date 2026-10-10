#include <stdio.h>
int main(){
    int marks[3][5];
    int stu[3] ={0}, totalm[5]={0};
    printf("Enter marks of 3 students in 5 subjects:\n");
    for(int i =0;i<3;i++){
        printf("Enter marks for Student %d:\n",i+1);
        for(int j=0;j<5;j++){
            printf("Subject %d: ", j+1);
            scanf("%d",&marks[i][j]);
            stu[i]+= marks[i][j];
            totalm[j] += marks[i][j];
        }
    }
    printf("Total Marks of Each Student:\n");
    for(int i=0;i<3;i++){
        printf("Student %d = %d\n",i+1,stu[i]);
    }
    printf("Average Marks of Each Subject:\n");
    for(int i=0;i<5;i++){
        float avg = (float) totalm[i] / 3.0;
        printf("Subject %d = %.2f\n",i+1,avg);
    }
}
