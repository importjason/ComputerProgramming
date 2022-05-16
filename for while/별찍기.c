#include <stdio.h>

void main() {

  int a, i, j;

  printf("단 수 입력 : ");
  scanf("%d", &a);

  for (i = 1; i <= a; i++) {

    for (j = 1; j <= (a - i); j++) {
      printf(" ");
    }

    for (j = 1; j <= (2 * i - 1); j++) {
      printf("*");
    }

    printf("\n");
  }

  for (i = a; i != 0; i--) {

    for (j = 1; j <= (a - i); j++) {
      printf(" ");
    }

    for (j = 1; j <= (2 * i - 1); j++) {
      printf("*");
    }

    printf("\n");
  }
}
