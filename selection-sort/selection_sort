#include <stdio.h>
int main() {
  int num[10000];
  int n;
  int i, j, temp, min, t, k;
  scanf("%d", &t);
  for (k = 1; k <= t; ++k) {
  scanf("%d", &n);
  for (i = 0; i < n; i++)
    scanf("%d", &num[i]);
  for (i = 0; i < n; i++) {
    min = num[i];
    for (j = i; j < n; j++) {
      if (min > num[j]) {
        min = num[j];
        temp = num[j];
        num[j] = num[i];
        num[i] = temp;
      }
    }
  }
  for (i = 0; i < n - 1; i++) {
    printf("%d ", num[i]);
  }
  printf("%d\n", num[i]);
}
  return 0;
}
