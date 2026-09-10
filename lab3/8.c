#include <stdio.h>
int main(){
    char input[2];
    printf("Enter a character: ");
    scanf("%1s", input);
    int in = (int) input[0];
    switch (in){
        case '0' ... '9':
            printf("%s is a digit", input);
            break;
        case 'A' ... 'Z':
        case 'a' ... 'z':
            if (in == 'a' || in == 'e' || in =='i' ||
                in == 'o' || in == 'u' || in == 'A' || in == 'E' || in == 'I' ||
                in == 'O'|| in == 'U'){
                printf("%s is a vowel",input);
                } else {
                    printf("%s is a
                    consonant",input);
                }
                break;
        default:
            printf("%s is a unknown
            character",input);
    }
}
