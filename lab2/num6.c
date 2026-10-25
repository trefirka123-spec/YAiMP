#include <stdio.h>
#include <stdlib.h>

int summa(int n, int m, int k, int *a) {
    if (n == 0) {
        for (int i = 0; i < k - 1; i++)
            printf("%d + ", a[i]);

        printf("%d\n", a[k - 1]);
        return 1;
    }

    for (int i = n; i >= 1; i--)
    {
        if (i <= m)
        {
            a[k] = i;
            summa(n - i, i, k + 1, a);
        }
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);
    int *a = malloc(n * sizeof(a));
    summa(n, n, 0, a);
    return 0;
}