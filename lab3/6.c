#include <stdio.h>
int main(){
    int score;
    char grade = 'A';
    printf("Enter quiz score (0-10): ");
    scanf("%d",&score);
    if (score > 10 || score < 0){
        printf("Invalid score");
        return 0;
    } else if (score < 3){
        grade = 'F';
    } else if (score == 3 || score == 4){
        grade = 'D';
    } else if (score == 5 || score == 6){
        grade = 'C';
    } else if (score == 7 || score == 8){
        grade = 'B';
    }
    printf("Grade = %c", grade);
}
