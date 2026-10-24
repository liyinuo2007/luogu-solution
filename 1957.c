#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    char op = 'a';

    for (int i = 0; i < n; i++) {
        char first[20];
        scanf("%s", first);

        int x1, x2;
        if (first[0] >= 'a' && first[0] <= 'c') {
            op = first[0];
            scanf("%d %d", &x1, &x2);
        } else {
            x1 = atoi(first);
            scanf("%d", &x2);
        }

        int res;
        char sign;
        if (op == 'a')      { res = x1 + x2; sign = '+'; }
        else if (op == 'b') { res = x1 - x2; sign = '-'; }
        else                { res = x1 * x2; sign = '*'; }

        char buf[100];
        sprintf(buf, "%d%c%d=%d", x1, sign, x2, res);
        printf("%s\n", buf);
        printf("%d\n", (int)strlen(buf));
    }
    return 0;
}