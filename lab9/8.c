#include <stdio.h>
#include <string.h>
int main() {
    char string[100], org[100];
    int right, left = 0, temp;
    printf("Enter a string: ");
    scanf("%[^\n]", string);
    strcpy(org, string);
    right = strlen(string) - 1;
    while (left < right) {
        temp = string[left];
        string[left] = string[right];
        string[right] = temp;
        left++;
        right--;
    }
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] != org[i]) {
            printf("The string is not a palindrome\n");
            return 0;
        }
    }
    printf("The string is a palindrome\n");
}
