/*
#include <stdio.h>

int calculator(int x);

int main(void) {
  int n;

  printf("원반의 개수를 입력하세요: ");
  scanf("%d", &n);

  printf("총 횟수: %d", calculator(n));
  return 0;
}

int calculator(int x){
  int r;
  if(x > 1) {
    r = 2^calculator(x-1) + 1;
  }
  else
    r = 1;

  return r; 
}
*/