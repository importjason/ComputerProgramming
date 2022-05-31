#include <stdio.h>

int main(void){ 
  int a, *p, **pp;
  a = 10;
  p = &a;
  pp = &p;
  printf("a = %d, *p = %d, **p = %d\n", a, *p, **pp);
  printf("p = %x, *pp = %x\n", p, *pp);
  printf("pp = %x\n", pp);
  return 0;
}
