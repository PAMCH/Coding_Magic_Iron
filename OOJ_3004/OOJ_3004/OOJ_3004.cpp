#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstring>
#define N 100

int n, a[N + 3][N + 3];
int draw[4] = { 0,1,0,-1 }, dcol[4] = {1,0,-1,0};

void input() {
	scanf("%d", &n);

	for (int i = 0; i <= n + 2; i++)
		for (int j = 0; j <= n + 2; j++)
			if (i == 0 || i == n + 2 || j == 0 || j == n + 2)
				a[i][j] = -1;
}

void core() {
	int raw = 1, col = 1, k = 0, num = 1;

	for (int i = 1; i <= (1 + n) * n / 2; i++) {
		a[raw][col] = num;
		num = num % 9 + 1;

		if (a[raw + draw[k] * 2][col + dcol[k] * 2] != 0)
			k = (k + 1) % 4;

		raw += draw[k];
		col += dcol[k];
	}
}

void output() {
	for (int i = 1; i <= n; i++, printf("\n"))
		for (int j = 1; j <= n; j++)
			if (a[i][j] == 0)
				printf("  ");
			else
				printf("%d ", a[i][j]);
}

int main()
{
	input();
	core();
	output();

	return 0;
}