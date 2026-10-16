#include <stdio.h>
int main(){
    char string[100];
    int count=0;
    printf("Enter a string: ");
    scanf("%[^\n]",string);
    for(int i=0; string[i] != '\0';count++,i++){}
    printf("Length of the given string: %d\n",count);
}
