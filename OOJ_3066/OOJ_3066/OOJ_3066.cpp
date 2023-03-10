#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstring>
#define N 30

int n, a[N + 2][N + 2];
int draw[4] = { 0,1,0,-1 }, dcol[4] = { 1,0,-1,0 };

void input() {
	scanf("%d", &n);

	for (int i = 0; i <= n + 1; i++) {
		for (int j = 0; j <= n + 1; j++) {
			if (i == 0 || i == n + 1 || j == 0 || j == n + 1)
				a[i][j] = -1;
		}
	}
}

void core() {
	int raw = n, col = 1, k = 3;

	for (int i = 1; i <= n * n; i++) {
		a[raw][col] = (n * n + 1) - i;
		if (a[raw + draw[k]][col + dcol[k]] != 0) {
			k = (k + 1) % 4;
		}
		raw += draw[k];
		col += dcol[k];
	}
}

void output() {
	for (int i = 1; i <= n; i++, printf("\n"))
		for (int j = 1; j <= n; j++)
			if (n <= 3)
				printf("%d ", a[i][j]);
			else if (5 <= n && n <= 9)
				printf("%2d ", a[i][j]);
			else
				printf("%3d ", a[i][j]);
}

int main()
{
	input();
	core();
	output();

	return 0;
}