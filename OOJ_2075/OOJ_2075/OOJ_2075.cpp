#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int n, x, c[101] = { 0 };
	int i, j, idx = 1;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			scanf("%d", &x);
			if (x == 3) {
				c[i]++;
			}
		}
	}

	for (i = 2; i <= n; i++) {
		if (c[idx] < c[i]) {
			idx = i;
		}
	}

	printf("%d\n", idx);

	return 0;
}