#include <stdio.h>
int main(){
    int input;
    printf("Enter number of elements: ");
    scanf("%d",&input);
    int arr[input+1];
    printf("Enter array elements:\n");
    for (int i = 0; i < input; i++){
        scanf("%d",&arr[i]);
    }
    int start,end;
    printf("Enter two indexes: ");
    scanf("%d%d",&start,&end);
    if ((start >= 0 ) && (end <= input) && (start <= end)){
        printf("Subarray is:\n");
        for (int i = start; i <= end; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else{
        printf("Invalid indexes\n");
    }
}
