#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int num;
    int ans = 0;
    scanf("%d", &num);
    while (num > 0) {
        ans += num % 10;
        num = num / 10;
    }
    printf("%d", ans);
    return 0;
}
