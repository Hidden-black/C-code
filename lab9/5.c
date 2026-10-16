#include <stdio.h>
int main(){
    char string[100],rev[100];
    printf("Enter a string: ");
    scanf("%99[^\n]",string);
    int count=0;
    for(int i=0; string[i] != '\0';count++,i++){}
    int i=0;
    for(int j=count-1; j>=0;i++,j--){
        rev[i] = string[j];
    }
    rev[i] = '\0';
    printf("Reversed string: %s\n",rev);
}
