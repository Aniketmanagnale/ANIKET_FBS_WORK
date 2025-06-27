#include <stdio.h>

int main() {
  int i, sum = 1;

  for (;;) {
    sum = sum + i;
	printf("Sum = %d\n", sum);  // or sum += i;
  }

  printf("Sum = %d\n", sum);

  return 0;
}
