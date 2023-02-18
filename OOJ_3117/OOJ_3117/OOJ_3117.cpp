#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstring>
#define N 50

int n, m, a[N + 2][N + 2], best;
int draw[8] = { -1,-1,0,1,1,1,0,-1 }, dcol[8] = { 0,1,1,1,0,-1, -1, -1 };


void input() {
	scanf("%d %d", &n, &m);

	for(int i=1;i<=n;i++)
		for (int j = 1; j <= m; j++) {
			scanf("%d", &a[i][j]);
		}
}

void core() {
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			for (int k = 0; k < 8; k++)
				if (a[i][j] == a[i + draw[k]][j + dcol[k]] && best < a[i][j])
					best = a[i][j];

	printf("%d\n", best);
}

int main()
{
	input();
	core();

	return 0;
}