#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <climits>
#define D 3650

int d, n, check[D + 1];

int main()
{
    int x, cnt = 0;

    scanf("%d", &d);
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d", &x);
        for (int j = x; j <= d; j += x) {
            check[j] = 1;
        }
    }

    for (int i = 1; i <= d; i++) {
        if (!(i % 7 == 6 || i % 7 == 0) && check[i] == 1) {
            cnt++;
        }
    }
    printf("%d\n", cnt);

    return 0;
}