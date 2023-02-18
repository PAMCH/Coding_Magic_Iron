#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstring>
#define N 100

int n, m, a[N + 2][N + 2], mine[9];
int draw[8] = { -1,-1,0,1,1,1,0,-1 }, dcol[8] = { 0,1,1,1,0,-1,-1,-1 };

void input() {
	scanf("%d", &n);
	scanf("%d", &m);
	
	for (int i = 1; i <= m; i++) {
		int raw, col;
		scanf("%d %d", &raw, &col);
		a[raw][col] = 1;
	}
}

void core() {
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if (a[i][j] == 0) {
				int cnt = 0;
				
				for (int k = 0; k < 8; k++)
					if (a[i + draw[k]][j + dcol[k]])
						cnt++;
				mine[cnt]++;
			}
}

void output() {
	for (int i = 8; i >= 1; i--)
		if (mine[i])
			printf("%d %d\n", i, mine[i]);
}

int main()
{
	input();
	core();
	output();

	return 0;
}