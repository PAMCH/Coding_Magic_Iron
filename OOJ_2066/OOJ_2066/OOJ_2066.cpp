#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int a[21][21];
	int r, c, i, j;

	scanf("%d %d", &r, &c);
	for (j = 1; j <= c; j++) {
		for (i = 1; i <= r; i++) {
			scanf("%d", &a[i][j]);
		}
	}

	for (i = 1; i <= r; i++) {
		for (j = 1; j <= c; j++) {
			printf("%d\n", a[i][j]);
		}
	}

	return 0;
}