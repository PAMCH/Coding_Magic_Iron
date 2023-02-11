#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int i, n, m;

	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &m);
		printf("%d %d\n", (m + 50) / 100 * 100, m / 100 * 100);
	}

	return 0;
}