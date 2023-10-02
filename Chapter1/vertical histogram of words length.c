#include <stdio.h>
#define MAXHIST 15
#define MAXWORD 11
#define GAP 2
int main()
{
    char ch;
    int lenCount[MAXWORD + 1], overflow = 0, len = 0;
    for (int i = 1; i < MAXWORD + 1; i++)
    {
        lenCount[i] = 0;
    }

    while ((ch = getchar()) != EOF)
    {
        if (ch == ' ' || ch == '\n' || ch == '\t')
        {
            if (len > 0)
            {
                if (len > MAXWORD)
                    overflow++;
                else
                    lenCount[len]++;
            }
            len = 0;
        }
        else
        {
            len++;
        }
    }

    int maxHeight = 0;
    for (int i = 1; i < MAXWORD + 1; i++)
    {
        if (lenCount[i] > maxHeight)
            maxHeight = lenCount[i];
    }
    for (int i = maxHeight; i >= 1; i--)
    {
        for (int j = 1; j < MAXWORD + 1; j++)
        {
            if (lenCount[j] >= i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            for (int z = 0; z < GAP; z++)
            {
                printf(" ");
            }
        }
        putchar('\n');
    }

    int count = 1;
    while (count < MAXWORD + 1)
    {
        printf("%d", count);
        for (int i = 0; i < GAP; i++)
        {
            printf(" ");
        }
        count++;
    }
    return 0;
}