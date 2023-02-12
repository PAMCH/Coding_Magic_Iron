#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int a[11][11][11], m, r, c, h, i, j, row[11] = { 0 };

	scanf("%d %d %d", &m, &r, &c);
	for (h = 1; h <= m; h++) {
		for (i = 1; i <= r; i++) {
			for (j = 1; j <= c; j++) {
				scanf("%d", &a[h][i][j]);
				row[i] += a[h][i][j];
			}
		}
	}

	for (i = 1; i <= r; i++) {
		printf("%d ", row[i]);
	}

	return 0;
}