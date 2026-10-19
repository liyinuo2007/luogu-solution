#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int x = 1;
    for (int i = n - 1; i >= 1; i--) {
        x = 2 * (x + 1);
    }
    printf("%d\n", x);
    return 0;
}
