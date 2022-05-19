#include <stdio.h>

int main(void) {
  char str[20] = "blueblackbackpack!";
  char re[30];
  int flag = 0;
  int idx = 1;

  re[0] = str[0];

  for (int i = 1; i < sizeof(str); i++) {
    if (str[i] == '!') {
      re[idx] = '!';
      break;
    }

    else {
      flag = 0;
      for (int j = 0; j < idx; j++) {
        if (re[j] == str[i]) {
          flag++;
          break;
        }
      }
      if (flag == 0) {
        re[idx] = str[i];
        idx++;
      }
    }
  }

  printf("%s", re);
}
