#include <ctype.h>
#include <stdio.h>
int main() {
    char sen[100];
    printf("Enter a sentence: ");
    scanf("%[^\n]", sen);
    for (int i = 0; sen[i] != '\0'; i++) {
        sen[i] = toupper((unsigned char)sen[i]);
    }
    printf("Modified sentence with all lowercase letters converted to "
           "uppercase: %s\n",
           sen);
}
