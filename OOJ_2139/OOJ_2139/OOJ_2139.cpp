#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#define N 100

int n, G, r[N + 1], g[N * 2 + 1];

void input() {
	scanf("%d %d", &n, &G);
	for (int i = 1; i <= G; i++) {
		scanf("%d", &g[i]);
	}
}

void core() {
	int gNum = 1;

	for (int i = 1; i <= n && gNum <= G; i++) {
		if (g[gNum] >= 2)
			r[i] = 2, g[gNum] -= 2;
		else if (g[gNum] == 1)
			r[i] = 1, g[gNum] -= 1;

		if (gNum <= G && g[gNum] == 0)
			gNum++;
	}

	for (int i = 1; i <= n && gNum <= G; i++) {
		if (r[i] == 1 && g[gNum] > 0)
			r[i]++, g[gNum]--;

		if (gNum <= G && g[gNum] == 0)
			gNum++;
	}
}

void output() {
	for (int i = 1; i <= n; i++) {
		printf("%d\n", r[i]);
	}
}

int main()
{
	input();
	core();
	output();

	return 0;
}