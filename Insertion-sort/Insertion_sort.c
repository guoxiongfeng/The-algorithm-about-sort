#include <stdio.h>
int main() {
    int num[10000], n, i, j, temp, k, t;
    scanf("%d", &t);
  for (k = 1; k <= t; ++k) {
    scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d", &num[i]);
    }
  for (i = 1; i < n; i++) {
    temp = num[i];
  for (j = i - 1; j >= 0 && num[j] > temp; --j)
    num[j+1] = num[j];
  num[j+1] = temp;
  }
  for (i = 0; i < n - 1; i++) {
    printf("%d ", num[i]);
    }
    printf("%d\n", num[i]);
}
  return 0;
}
