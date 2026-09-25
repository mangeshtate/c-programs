#include <stdio.h>

int main() {
  int result1 = 10 - 2 + 5;    // (10 - 2) + 5 = 13
  int result2 = 10 - (2 + 5);  // 10 - 7 = 3

  printf("%d\n", result1);
  printf("%d\n", result2);

  return 0;
}