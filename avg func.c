#include <stdio.h>

int main() {
  int n , i , sum , e , count = 0;
  float avg;
  printf("when to end: ");
  scanf("%d", &n);
  printf("from where to start:");
  scanf("%d", &e);
  for(i=e; i<= n; i++)
  {
      sum = sum + i ;
      count ++;
  }
  printf("sum is %d", sum);
  avg = sum/count;
  printf("average is %f", avg);
    return 0;
}