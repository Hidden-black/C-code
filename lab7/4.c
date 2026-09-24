#include <stdio.h>
int main(){
    int input;
    printf("Enter number of elements: ");
    scanf("%d",&input);
    int arr[input];
    printf("Enter array elements:\n");
    for (int i=0;i<input;i++){
        scanf("%d",&arr[i]);
    }
    int pos, neg, odd, even, zero;
    pos = neg = odd = even = zero = 0;
    for (int i = 0; i < input;i++){
        if(arr[i] > 0){
            pos++;
        }
        if(arr[i] < 0){
            neg++;
        }
        if(arr[i] % 2 == 0 && arr[i] != 0){
            even++;
        }
        if(arr[i] % 2 != 0 ){
            odd++;
        }
        if(arr[i] == 0 && i <input){
            zero++;
        }
    }
    printf("Positive numbers = %d\n",pos);
    printf("Negative numbers = %d\n", neg);
    printf("Odd numbers = %d\n", odd);
    printf("Even numbers = %d\n", even);
    printf("Zero numbers = %d\n",zero);
}
