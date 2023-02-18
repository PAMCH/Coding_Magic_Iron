#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstring>
#define N 1000

int n, m, w, h;
int a[N + 1][N + 1], s[N + 1][N + 1];

void input() {
	int c;

	scanf("%d", &c);
	scanf("%d %d", &m, &n);

	for (int i = 1; i <= c; i++) {
		int row, col;
		scanf("%d %d", &col, &row);
		a[row][col] = 1;
	}
	scanf("%d %d", &w, &h);
}

void core() {
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++) {
			s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1];
			s[i][j] += a[i][j];
		}
}

void output() {
	int max = 0;

	for (int i = h; i <= n; i++)
		for (int j = w; j <= m; j++) {
			int cnt = s[i][j] - s[i - h][j] - s[i][j - w];
			cnt += s[i - h][j - w];
			if (max < cnt)
				max = cnt;
		}

	printf("%d\n", max);
}

int main()
{
	input();
	core();
	output();

	return 0;
}