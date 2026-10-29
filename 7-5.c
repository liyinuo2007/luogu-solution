#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[100];

    if (fgets(s, sizeof(s), stdin) == NULL)
        return 0;

    /* 去掉行末换行符（兼容 \n 和 \r\n） */
    s[strcspn(s, "\r\n")] = '\0';

    int back = (int)strlen(s) - 1;
    int start = 0;

    for (; start < back; start++, back--)
    {
        char t = s[start];
        s[start] = s[back];
        s[back] = t;
    }

    printf("%s\n", s);
    return 0;
}