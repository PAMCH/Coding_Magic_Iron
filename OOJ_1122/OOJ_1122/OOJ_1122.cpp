#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#define N 1000

int n, m, a[N + 1][N + 1];

void input() {
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            scanf("%d", &a[i][j]);
}

int core(int*b) {
    int x = 0, cnt;

    for (int i = 1; i <= n; i++) {
        cnt = 0;
        for (int j = 1; j <= m; j++) {
            if (*(b + j) == -1 || a[i][j] == *(b + j))
                cnt++;
        }
        if (cnt == m)
            x++;
    }
    return x;
}

void output() {
    int q, b[N + 1];

    scanf("%d", &q);

    for (int i = 1; i <= q; i++) {
        for (int j = 1; j <= m; j++) {
            scanf("%d", &b[j]);
        }
        printf("%d\n", core(b));
    }
}

int main()
{
    input();
    output();

    return 0;
}