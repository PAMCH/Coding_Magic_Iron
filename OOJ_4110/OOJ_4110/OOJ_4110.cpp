#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstring>
#define N 19

int m, a[N + 2][N + 2], raw[N * N + 1], col[N * N + 1], res;
int draw[8] = { -1,-1,0,1,1,1,0,-1 };
int dcol[8] = { 0,1,1,1,0,-1,-1,-1 };


void input() {
	scanf("%d", &m);
	for (int i = 1; i <= m; i++) {
		scanf("%d %d", &raw[i], &col[i]);
	}
}

void core() {
	int stone = 1, yy, xx, cnt;

	for (int i = 1; i <= m && !res; i++) {
		a[raw[i]][col[i]] = stone;

		for (int k = 0; k < 4; k++) {
			cnt = 1;
			yy = raw[i] + draw[k], xx = col[i] + dcol[k];
			while (stone==a[yy][xx])
			{
				cnt++, yy += draw[k], xx += dcol[k];
			}
			yy = raw[i] + draw[k + 4], xx = col[i] + dcol[k + 4];
			while (stone==a[yy][xx])
			{
				cnt++, yy += draw[k + 4], xx += dcol[k + 4];
			}
			if (cnt == 5)
				res = i;
		}
		stone = 3 - stone;
	}
	
}

void output() {
	if (!res)
		printf("-1\n");
	else
		printf("%d\n", res);
}

int main()
{
	input();
	core();
	output();

	return 0;
}