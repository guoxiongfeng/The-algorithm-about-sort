#include<stdio.h>
void qsort(int a[], int l, int r) {
    if (r - l <= 1 ) return ;
    int i = l, j = r, m = a[l];
    while (i < j) {
        while (i < j && a[j] >= m) --j;
        a[i] = a[j];
        while (i < j && a[i] <= m) ++i;
        a[j] = a[i];
    }
    a[i] = m;
    qsort(a, l, i-1);
    qsort(a, i+1, r);
    return ;
}
int main() {
    int a[100], i, j, n;
    scanf("%d", &n);
    for (i = 1; i <= n; ++i)
      scanf("%d", &a[i]);
    qsort(a, 1, n);
    for (i = 1; i <= n - 1; ++i)
      printf("%d ", a[i]);
    printf("%d\n", a[n]);
      return 0;
}
