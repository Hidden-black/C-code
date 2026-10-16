#include <stdio.h>
#include <string.h>
int main(){
    char string[100],substring[50];
    char *search;
    printf("Enter a string: ");
    scanf("%[^\n]",string);
    printf("Enter a substring: ");
    scanf(" %[^\n]",substring);
    search = strstr(string,substring);
    if (search != NULL){
        printf("Substring found at index %ld\n",search -
        string);
    } else{
        printf("Substring not found in the string\n");
    }
}
