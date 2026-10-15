#include <stdio.h>
int main(){
    char sen [100], target [2];
    printf("Enter a string: ");
    scanf("%[^\n]", sen);
    printf("Enter the target character: ");
    scanf("%s", target);
    int last=-1;
    for(int i=0; sen [i] != '\0';i++){
        if (target [0] == sen[i]){
            last = i;
        }
    }
    if(last== -1){
        printf("'%s' not found in the string\n", target);
        return 0;
    } else{
        printf("Last occurrence of '%s' is at index
        %d\n", target, last);
    }
}
