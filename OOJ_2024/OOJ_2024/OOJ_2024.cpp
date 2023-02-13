#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <climits>

int main()
{
    int n, i, j, temp, dir = 0;
    int s[1001], d[1001], c[1001];

    scanf("%d", &n);

    for (i = 1; i <= n - 1; i++) {
        scanf("%d %d %d", &s[i], &d[i], &c[i]);
    }

    for (i = 1; i <= n - 2; i++) {
        for (j = i + 1; j <= n - 1; j++) {
            if (s[i] > s[j]) {
                temp = s[i], s[i] = s[j], s[j] = temp;
                temp = d[i], d[i] = d[j], d[j] = temp;
                temp = c[i], c[i] = c[j], c[j] = temp;
            }
        }
    }

    for (i = 1; i <= n - 1; i++) {
        dir ^= c[i];
    }

    printf("%d\n", dir);

    return 0;
}