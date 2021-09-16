/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  clock_t start, stop;
  double duration;

  start = clock();

  int N;
  int fact=1;
  printf("숫자를 입력하시오: ");
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    fact *= (i+1);
  }
  printf("%d\n", fact);

  stop = clock();
  duration = (double)(stop - start) / CLOCKS_PER_SEC;
  printf("수행시간은 %f초입니다.\n", duration); // 0.000125초
  return 0;
}
*/