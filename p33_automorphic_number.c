#include <stdio.h>
int main() {
    int n, t, sq, flag = 1;
    scanf("%d", &n);
    sq = n * n;
    t = n;
    while (t > 0) {
        if (t % 10 != sq % 10) flag = 0;
        t = t / 10;
        sq = sq / 10;
    }
    if (flag == 1) printf("Automorphic");
    else printf("Not automorphic");
    return 0;
}
