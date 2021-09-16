/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int factorial(int n);

int main(void) {
  clock_t start, stop;
  double duration;

  start = clock();
  int N;
  printf("숫자를 입력하시오: ");
  scanf("%d", &N);
  printf("%d\n", factorial(N));
  stop = clock();
  duration = (double)(stop - start) / CLOCKS_PER_SEC;
  printf("수행시간은 %f초입니다.\n", duration); // 0.000117초
  return 0;
}

int factorial(int n){
  if(n == 1) return 1;
  else return (n * factorial(n - 1));
}
*/