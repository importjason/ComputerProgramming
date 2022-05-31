#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  float sum = 0;
  float *p = NULL;

  scanf("%d",&n);
  p = (int*) malloc(n*sizeof(int));

  for(int i = 0; i < n; i++) {
    scanf("%f",p+i);
    sum += *(p+i);
  }

  printf("총 과목 평균은 %.1f", sum/n);

  free(p);
}
