#include <stdio.h>
int main() {
    int n, t, d, sum = 0;
    scanf("%d", &n);
    t = n;
    while (t > 0) {
        d = t % 10;
        sum = sum + d * d * d;
        t = t / 10;
    }
    if (sum == n) printf("Armstrong");
    else printf("Not Armstrong");
    return 0;
}
