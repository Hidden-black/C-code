#include <stdio.h>
#include <string.h>
int main(){
    char *loc;
    char string[100],substring[100];
    printf("Enter main string: ");
    scanf("%[^\n]%*c",string);
    printf("Enter substring: ");
    scanf("%[^\n]%*c",substring);
    loc = strstr(string,substring);
    if(loc != NULL){
        printf("Substring found\n");
        printf("First occurrence: %s\n",loc);
    } else{
        printf("Substring not found\n");
    }
}
