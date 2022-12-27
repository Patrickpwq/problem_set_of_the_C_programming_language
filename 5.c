#include <stdio.h>
int main()
{
    int n, a[200];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 3 == 0 && cnt != n - 1)
            printf("%d ", a[i]);
        if (a[i] % 3 == 0 && cnt == n - 1)
            printf("%d\n", a[i]);
        if (a[i] % 3 == 0)
            cnt++;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 3 == 1 && cnt != n - 1)
            printf("%d ", a[i]);
        if (a[i] % 3 == 1 && cnt == n - 1)
            printf("%d\n", a[i]);
        if (a[i] % 3 == 1)
            cnt++;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 3 == 2 && cnt != n - 1)
            printf("%d ", a[i]);
        if (a[i] % 3 == 2 && cnt == n - 1)
            printf("%d\n", a[i]);
        if (a[i] % 3 == 2)
            cnt++;
    }
}