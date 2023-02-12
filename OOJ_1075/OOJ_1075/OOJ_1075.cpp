#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int a[21][21] = { 0 };
	int n, s, i, j;

	scanf("%d %d", &n, &s);

	for (j = 1; j <= n; j++) {
		for (i = 1; i <= j; i++) {
			a[i][j] = s;
			s = s % 9 + 1;
		}
	}

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (a[i][j] == 0) {
				printf("  ");
			}
			else {
				printf("%d ", a[i][j]);
			}

		}
		printf("\n");

	}

	return 0;
}