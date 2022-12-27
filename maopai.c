#include <stdio.h>
int main()
{
    int n, a[100];
    scanf("%d", &n);
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
    for (int i = 1; i <= n; i++)
        printf("%d", a[i]);
}
