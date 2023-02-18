#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstring>
#define N 200

int n, m, a[N + 1][N + 1], res;
int draw[8] = { -1,-1,0,1,1,1,0,-1 }, dcol[8] = { 0,1,1,1,0,-1,-1,-1 };

void input() {
	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			scanf("%d", &a[i][j]);
}

void core() {
	for(int i=2;i<=n-1;i++)
		for (int j = 2; j <= m - 1; j++) {
			int cnt = 0;

			for (int k = 0; k < 8; k++) {
				if (a[i][j] <= a[i + draw[k]][j + dcol[k]])
					cnt++;
			}

			if (cnt == 8)
				res++;
		}

	printf("%d\n", res);
}

int main()
{
	input();
	core();

	return 0;
}