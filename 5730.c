#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char m[105];               // m 还是你那个数，改成字符串存
    scanf("%s", m);            // 补上分号

    char num[10][5][4] = {     // n 改成 10
        {"XXX","X.X","X.X","X.X","XXX"},  // 0
        {"..X","..X","..X","..X","..X"},  // 1
        {"XXX","..X","XXX","X..","XXX"},  // 2
        {"XXX","..X","XXX","..X","XXX"},  // 3
        {"X.X","X.X","XXX","..X","..X"},  // 4
        {"XXX","X..","XXX","..X","XXX"},  // 5
        {"XXX","X..","XXX","X.X","XXX"},  // 6
        {"XXX","..X","..X","..X","..X"},  // 7
        {"XXX","X.X","XXX","X.X","XXX"},  // 8
        {"XXX","X.X","XXX","..X","XXX"},  // 9
    };                         // 补上分号

    for (int i = 0; i < 5; i++) {               // ④ while 换成这个：先按行
        for (int j = 0; j < n; j++) {           // 再按数字
            printf("%s", num[m[j] - '0'][i]);   // m[j]-'0'：字符'5'变成数字5
            if (j < n - 1) printf(".");         // 数字之间一列间隔
        }
        printf("\n");
    }
    return 0;
}
