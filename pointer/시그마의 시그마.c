#include <stdio.h>

int sigma(int *kp,int *ip, int arr[]) {
  int ans_sig1 = 0;
  for(kp = arr; kp < arr + *ip; kp++) {
    ans_sig1 += *kp;
  }
  return ans_sig1;
}

int main() {
  int k,i,N;
  int *kp;
  int *ip = &i;
  int *Np = &N;
  int ans = 0;
  
  scanf("%d",Np);
  
  int arr[10];
  
  for(kp = arr; kp < arr + *Np; kp++) {
    scanf("%d", kp);
  }
  
  for(i = 1; i < N+1; i++) {
    ans += sigma(kp,ip,arr);
  }
  printf("%d",ans);
}
