#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstring>
#define N 5

const int n = 5;
int a[N + 1][N + 1], raw, col, dir;
int draw[8] = { -1,-1,0,1,1,1,0,-1 };
int dcol[8] = { 0,1,1,1,0,-1,-1,-1 };


void input() {
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			scanf("%d", &a[i][j]);
}

void core() {
	int max = 0, cnt;

	for (int i = 1; i <= n; i++) {
		cnt = 0;
		for (int j = 1; j <= n; j++)
			if (a[i][j] < 0)
				cnt++;
		if (max < cnt)
			max = cnt, raw = i, col = 1, dir = 2;
	}

	for (int j = 1; j <= n; j++) {
		cnt = 0;
		for (int i = 1; i <= n; i++)
			if (a[i][j] < 0)
				cnt++;
		if (max < cnt)
			max = cnt, raw = 1, col = j, dir = 4;
	}

	cnt = 0;
	for (int i = 1; i <= n; i++)
		if (a[i][i] < 0)
			cnt++;
	if (max < cnt)
		max = cnt, raw = 1, col = 1, dir = 3;

	cnt = 0;
	for (int i = 1; i <= n; i++)
		if (a[i][n + 1 - i] < 0)
			cnt++;
	if (max < cnt)
		max = cnt, raw = 1, col = n, dir = 5;
}

void output() {
	for (int i = 1; i <= n; i++) {
		if (a[raw][col] > 0)
			printf("%d ", a[raw][col]);
		raw += draw[dir];
		col += dcol[dir];
	}
}

int main()
{
	input();
	core();
	output();

	return 0;
}