#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, a[10001] = {0};
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            ans += abs(a[i] - a[j]);
        }
    }
    printf("%d", ans);
}