// Copyright[2023]<Yu Ruixi> //
#include <stdio.h>
#include <stdlib.h>
int main() {
  int tree[100];
  int maxsize;
  int i, j;
  scanf("%d\n", &maxsize);
  for (int m = 0; m < maxsize; m++) {
    scanf("%d ", &tree[m]);
  }
  scanf("%d %d", &i, &j);
  if ((tree[i] == 0 && i < j) || (tree[i] == 0 && tree[j] != 0)) {
    printf("ERROR: T[%d] is NULL", i);
  } else if ((tree[j] == 0 && j < i) || (tree[j] == 0 && tree[i] != 0)) {
    printf("ERROR: T[%d] is NULL", j);
  }
  return 0;
}