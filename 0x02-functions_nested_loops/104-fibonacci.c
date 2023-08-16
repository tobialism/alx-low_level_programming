#include <stdio.h>
int main(void)
{
  int i = 0;
  unsigned long long fib1 = 0;
  unsigned long long fib2 = 1;
  unsigned long long fib_sum;
  printf("1, 2, ");
  for (i = 2; i < 98; i++) {
    fib_sum = fib1 + fib2;
    printf("%llu, ", fib_sum);
    fib1 = fib2;
    fib2 = fib_sum;
  }
  printf("\n");
return (0);
}
