#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstring>
#define N 100

int n, m, c[N + 1];

void input() {
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			int x;
			scanf("%1d", &x);
			c[j] += x;
		}
	}
}

int minArr(int* start, int* end) {
	int min = *start;

	while (start != end)
	{
		if (min > *start)
			min = *start;
		start++;
	}
	return min;
}

void core() {
	int min = minArr(c + 1, c + m + 1);
	for (int j = 1; j <= m; j++) {
		c[j] -= min;
	}
}

void output() {
	for (int i = 1; i <= n; i++, printf("\n")) {
		for (int j = 1; j <= m; j++) {
			if (c[j] >= n - i + 1)
				printf("1");
			else
				printf("0");
		}
	}
}
int main()
{
	input();
	core();
	output();

	return 0;
}