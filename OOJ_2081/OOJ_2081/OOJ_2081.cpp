#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#define N 500
#define M 500

int n, m, a[N + 1][M + 1];

void input() {
	scanf("%d %d", &m, &n);
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			scanf("%d", &a[i][j]);
}

int core() {
	for (int j = 1; j <= m; j++) {
		int  cnt = 0;

		for (int i = 1; i <= n; i++)
			cnt += a[i][j];

		if (cnt == n)
			return 1;
	}
	return 0;
}

void output() {
	if (core() == 1) {
		printf("yes\n");
	}
	else {
		printf("no\n");
	}
}

int main()
{
	for (int t = 1; t <= 3; t++) {
		input();
		output();
	}

	return 0;
}