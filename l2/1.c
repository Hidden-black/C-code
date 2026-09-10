#include <stdio.h>
int main(void) {
  printf("Enter the number: ");
  int number = 0;
  scanf("%d", &number);
  if (number % 2 == 0) {
    printf("The input number %d is Even\n", number);
  } else {
    printf("The input number %d is Odd\n", number);
  }
}
