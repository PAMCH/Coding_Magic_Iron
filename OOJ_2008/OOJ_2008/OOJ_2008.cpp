#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#define N 50000
#define M 50

int n, m, p;
int a[N + 1][M + 1], c[N + 1];

void core(const int num, const int ans) {
    for (int i = 1; i <= n; i++)
        if (a[i][num] == ans)
            c[i]++;
}

void input() {
    scanf("%d %d %d", &n, & m, &p);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 1; i <= p; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        core(x, y);
    }
}

void output() {
    int cnt = 0;

    for (int i = 1; i <= n; i++) {
        if (c[i] == p) {
            cnt++;
        }
    }

    printf("%d\n", cnt);
}

int main()
{
    input();
    output();

    return 0;
}