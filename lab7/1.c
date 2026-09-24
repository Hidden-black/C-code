#include <stdio.h>
int main(){
    signed int numb,arr[50];
    printf("Enter number of elements: ");
    scanf("%d",&numb);
    printf("Enter %d elements:\n", numb);
    int max ,min;
    for(int i=0;i<numb;i++){
        scanf("%d",&arr[i]);
    }
    max = min = arr[0];
    for(int i=0;i<numb;i++){
        if (arr[i]> max){
            max = arr[i];
        }
        if (arr[i]<min){
            min = arr[i];
        }
    }
    printf("Largest element = %d\n",max);
    printf("Smallest element = %d\n",min);
}
