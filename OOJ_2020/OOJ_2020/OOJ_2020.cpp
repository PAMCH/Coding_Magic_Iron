#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <climits>

int main()
{
    int n, i, r = 1, MOD = 100;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        r = (r * 2) % MOD;
    }

    printf("%d\n", r);

    return 0;
}