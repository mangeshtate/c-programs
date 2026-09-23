#include <stdio.h>

int main() {
  int x = 5;
  printf("%d\n",x++);//firts prints then increment
  printf("%d\n",x);//prints incremented value
  printf("%d\n", ++x);//firts increments then prints
  printf("%d\n",x);//prints incremented value
  return 0;
}