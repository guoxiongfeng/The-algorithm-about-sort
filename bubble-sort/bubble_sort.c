#include <stdio.h>

int main() {
    int num[10000];
    int n, t, k;
    int i, j, temp;
    int result[2000];
    scanf("%d", &t);
    for (k = 1; k <= t; ++k) {
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
      scanf("%d", &num[i]);
    }

    for (i = 0; i < n; i++) {
      for (j = 0; i + j < n - 1; j++) {
        if (num[j] > num[j + 1]) {
          temp = num[j];
          num[j] = num[j + 1];
          num[j + 1] = temp;
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
