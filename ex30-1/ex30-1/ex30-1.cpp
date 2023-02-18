#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstring>
#define N 100

int n, m;
int a[N + 1][N + 1], s[N + 1][N + 1];

void input() {
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			scanf("%d", &a[i][j]);
}

void core() {
	for(int i=1;i<=n;i++)
		for (int j = 1; j <= m; j++) {
			s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1];
			s[i][j] += a[i][j];
		}
}

void output() {
	for (int i = 1; i <= n; i++, printf("\n"))
		for (int j = 1; j <= m; j++)
			printf("%d ", s[i][j]);
}

int main()
{
	input();
	core();
	output();

	return 0;
}