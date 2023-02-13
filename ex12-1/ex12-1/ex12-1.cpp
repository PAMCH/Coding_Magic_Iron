#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <climits>

int main()
{
    int a[10001] = { 0,1 };
    int i, n, MOD = 1000000000;

    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        a[i] = (a[i - 1] + a[i - 2]) % MOD;
    }

    printf("%d\n", a[n]);

    return 0;
}