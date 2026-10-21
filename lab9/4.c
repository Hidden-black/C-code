#include <stdio.h>

int main() {
    char sen[100];
    printf("Enter a sentence: ");
    fgets(sen, sizeof(sen), stdin);
    int count = 0;
    for (int i = 0; sen[i] != '\0'; i++) {
        if (sen[i] == ' ') {
            count++;
        }
    }
    printf("Number of words in the sentence: %d\n", count + 1);
}
