#include <stdio.h>
int main()
{
    char ch, pre = 'a';
    while ((ch = getchar()) != EOF)
    {
        if (ch != ' ')
        {
            putchar(ch);
        }
        else
        {
            if (pre != ' ')
            {
                putchar(ch);
            }
        }
        pre = ch;
    }
}