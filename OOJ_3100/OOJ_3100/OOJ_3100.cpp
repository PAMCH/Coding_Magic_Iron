#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstring>
#define N 40

int n, m, a[N + 2][N + 2], res;
int draw[4] = { 0,1,0,-1 }, dcol[4] = { 1,0,-1,0 };

void input() {
	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			scanf("%d", &a[i][j]);
}

void core() {
	int raw = 1, col = 1;

	res = a[raw][col];

	a[raw][col] = 0;

	while (!(raw==n&&col==m))
	{
		int dir = 0;

		for (int k = 1; k < 4; k++)
			if (a[raw + draw[dir]][col + dcol[dir]] < a[raw + draw[k]][col + dcol[k]])
				dir = k;

		raw += draw[dir];
		col += dcol[dir];
		res += a[raw][col];
		a[raw][col] = 0;
	}

	printf("%d\n", res);
}

int main()
{
	input();
	core();

	return 0;
}