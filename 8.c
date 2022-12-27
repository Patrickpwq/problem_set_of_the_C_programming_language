#include <stdio.h>
#include <stdlib.h>
long long min;
int check(int x, int a[], int n, int m)
{
    int cnt = 1;
    int temp = a[1];
    for (int i = 2; i <= n; i++)
    {
        if (a[i] - temp >= x)
        {
            cnt++;
            temp = a[i];
        }
    }   
    return cnt >= m;
}
int main()
{
    int n, m, a[10001] = {0};
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    int L = 0, R = 1e9 + 1;

    while (L < R - 1)
    {
        int mid = (L + R) / 2;
        if (check(mid, a, n, m))
            L = mid;
        else 
            R = mid;
    }
    printf("%d", L);
    return 0;
}