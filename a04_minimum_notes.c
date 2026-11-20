#include <stdio.h>
int main() {
    int n, i;
    int notes[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    scanf("%d", &n);
    for (i = 0; i < 9; i++) {
        if (n / notes[i] > 0)
            printf("%d notes of %d\n", n / notes[i], notes[i]);
        n = n % notes[i];
    }
    return 0;
}
