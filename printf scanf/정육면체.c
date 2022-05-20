#include <stdio.h>

int main(void) {
  int a, b, c;

  printf("가로 입력 :");
  scanf("%d", a);
  printf("세로 입력 :");
  scanf("%f", b);
  printf("높이 입력 :");
  scanf("%f", c);

  printf("정육면체의 겉넓이는 %f이며, 부피는 %f입니다.\n",
         2 * (a * b + b * c + c * a), a * b * c);

  return 0;
}
