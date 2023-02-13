#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <climits>
#define N 2000000

int c, n, check[N + 1];

int main()
{
    scanf("%d %d", &c, &n);

    for (int i = 1; i <= c; i++) {
        int t;
        scanf("%d", &t);
        for (int j = 0; j <= n; j += t) {
            check[j] = 1;
        }
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        cnt += check[i];
    }
    printf("%d\n", cnt);

    return 0;
}