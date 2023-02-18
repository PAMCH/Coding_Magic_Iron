#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstring>
#define N 100

int n, m, a[N + 1][N + 1];
int r[N + 1], c[N + 1], d1[N * 2], d2[N * 2];


void input() {
	scanf("%d %d", &n, &m);

	for (int i = 1; i <= m; i++) {
		int raw, col;
		scanf("%d %d", &raw, &col);
		a[raw][col] = 1;
	}
}

void core() {
	for(int i=1;i<=n;i++)
		for (int j = 1; j <= n; j++) {
			r[i] += a[i][j];
			c[j] += a[i][j];
			d1[i + j - 1] += a[i][j];
			d2[n + i - j] += a[i][j];
		}
}

void output() {
	int res = 0;

	for(int i=1;i<=n;i++)
		for (int j = 1; j <= n; j++) {
			int cnt = r[i] + c[j] + d1[i + j + -1] + d2[n + i - j];
			if (a[i][j])
				cnt -= 3;
			if (cnt == m)
				res++;
		}

	printf("%d\n", res);
}

int main()
{
	input();
	core();
	output();

	return 0;
}