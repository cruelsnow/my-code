#include <stdio.h>
int in(char e) {
  if ((e - '0') < 0) {
    return 0;
  } else {
    return 1;
  }
}

int main() {
  char lo[23] = {0};
  scanf("%s", lo);
  int n = 0;
  int m = 0;
  while (lo[n] != '\0') {
    if (in(lo[n]) == 1) {
      m++;
    }
    n++;
  }

  printf("%d", m);
  return 0;
}