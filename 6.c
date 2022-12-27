#include <stdio.h>
int main()
{
    int n, m, a[20][20] = {0};
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            scanf("%d", &a[i][j]);

    int T;
    scanf("%d", &T);
    while (T--)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        a[x][y] = 1 - a[x][y];
        a[x - 1][y + 1] = 1 - a[x - 1][y + 1];
        a[x + 1][y - 1] = 1 - a[x + 1][y - 1];
        a[x + 1][y + 1] = 1 - a[x + 1][y + 1];
        a[x - 1][y - 1] = 1 - a[x - 1][y - 1];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < m; j++)
            printf("%d ", a[i][j]);
        printf("%d\n", a[i][m]);
    }
}  