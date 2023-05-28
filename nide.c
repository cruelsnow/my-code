#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    int m;
    scanf("%d", &m);

    char h;
    scanf("%c", &h);  // read a single character, ignoring leading whitespaces

    if (h == 'a' || h == 'b' || h == 'c') {
      printf("good ");
    } else {
      printf("ha ");
    }
  }

  return 0;
}
