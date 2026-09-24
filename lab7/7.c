#include <stdio.h>
int main(){
    int input;
    printf("Enter number of elements: ");
    scanf("%d",&input);
    int arr[input],swap;
    printf("Enter array elements:\n");
    for (int i =0; i<input;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0; i<input-1;i++){
        for (int wee=0; wee< input-i-1;wee++){
            if (arr[wee]> arr[wee+1]){
                swap = arr[wee];
                arr[wee] = arr[wee+1];
                arr[wee+1] = swap;
            }
        }
    }
    printf("Array in ascending order:\n");
    for(int i=0; i<input;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
