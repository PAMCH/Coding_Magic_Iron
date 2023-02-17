#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstring>
#define N 100

int t, a[N + 1][N + 1];

void input() {
	scanf("%d", &t);
}


void color(int x, int y, int L, int col = 0) {
	for (int i = y; i <= y + L - 1; i++)
		for (int j = x; j <= x + L - 1; j++)
			a[i][j] = col;
}

void output(int x,int y,int L) {
	int cnt = 0;
	for (int i = y; i <= y + L - 1; i++)
		for (int j = x; j <= x + L - 1; j++)
			cnt += a[i][j];
	printf("%d\n", cnt);
}

void core() {
	char str[10];
	int x, y, L;

	for (int i = 1; i <= t; i++) {
		scanf("%s %d %d %d", str, &x, &y, &L);
		if (strcmp(str, "WHITE") == 0)
			color(x, y, L);
		else if (strcmp(str, "BLACK") == 0)
			color(x, y, L, 1);
		else
			output(x, y, L);
	}
}


int main()
{
	input();
	core();

	return 0;
}