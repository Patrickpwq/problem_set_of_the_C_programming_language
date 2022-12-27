#include <stdio.h>

#define MAX 100

void insert(int A[], int B[], int lenA, int lenB, int pos);
void create(int array[], int num);

int main()
{
    int A[MAX], B[MAX];
    int i, m, n, pos;

    scanf("%d%d%d", &m, &n, &pos);
    create(A, m);
    create(B, n);
    insert(A, B, m, n, pos);

    for (i = 0; i < m + n; i++)
    {
        if (i == m + n - 1)
            printf("%d\n", A[i]);
        else
            printf("%d ", A[i]);
    }

    return 0;
}

/* 请在这里填写答案 */
void create(int array[], int num)
{
    for (int i = 0; i < num; i++)
    {
        scanf("%d", array + i);
    }
}
void insert(int A[], int B[], int lenA, int lenB, int pos)
{
    int C[MAX];
    for (int i = 0; i < lenA - pos; i++)
        C[i] = A[i + pos];
    for (int i = pos; i <pos  + lenB; i++)
    {
        A[i] = B[i - pos];
    }
    for (int i = pos + lenB; i < lenA + lenB; i++)
        A[i] = C[i - pos - lenB];
}