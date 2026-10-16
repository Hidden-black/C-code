#include <stdio.h>
#include <string.h>
int main(){
    char string[100],string2[100];
    printf("Enter the first string: ");
    scanf("%[^\n]",string);
    printf("Enter the second string: ");
    scanf(" %[^\n]",string2);
    char copy[100];
    strcat(string,string2);
    strcpy(copy,string);
    printf("Concatenated string: %s\n",copy);
    printf("Length of concatenated string:
    %ld\n",strlen(copy));
    printf("Copied string: %s\n",copy);
}
