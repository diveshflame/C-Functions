#include <stdio.h>
int main() {
  int t1 = 0, t2 = 1, t3 = 0, n;
  printf("Enter a positive number: ");
  scanf("%d", &n);

  printf("Fibonacci Series : %d, %d, ", t1, t2);
  t3 = t1 + t2;

  while (t3 <= n) {
    printf("%d, ", t3);
    t1 = t2;
    t2 = t3;
    t3 = t1 + t2;
  }

  return 0;
}
