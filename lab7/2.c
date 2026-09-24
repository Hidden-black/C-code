#include <stdio.h>
int main(){
    int input, arr[100];
    printf("Enter number of elements: ");
    scanf("%d", &input);
    printf("Enter array elements:\n");
    for (int i = 0;i<input;i++){
        scanf("%d",&arr[i]);
    }
    int osum=0;
    for(int i=0;i<input;i++){
        if (i%2 !=0){
            osum += arr[i];
        }
    }
    printf("Sum of elements at odd indexes = %d",osum);
}
