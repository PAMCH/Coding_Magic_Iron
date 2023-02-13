#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <climits>
#define N 1000

int n, m, a[N + 1];

int sameDigit(int x) {
    int c[10] = { 0 };

	while (x)
	{
		c[x % 10]++;
		x /= 10;
	}

	int max = 0;
	for (int i = 0; i <= 9; i++) {
		if (max < c[i]) {
			max = c[i];
		}
	}

	return max;
}

int main()
{
	int cnt = 0;

	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 1; i <= n; i++) {
		if (sameDigit(a[i]) == m) {
			cnt++;
		}
	}

	printf("%d\n", cnt);

    return 0;
}