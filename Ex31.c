#include <stdio.h>
#include <stdlib.h>

int main() {
  float S = 0;
  int i;

  for (i = 1; i <= 50; i++) {
    S += (2 * i - 1) / i;
  }

  printf("S = %.2f\n", S);

  return 0;
}
