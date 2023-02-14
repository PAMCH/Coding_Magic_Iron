#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int a[4], b[4];

int gcd(int x, int y) {
	while (y)
	{
		int r = x % y;
		x = y;
		y = r;
	}

	return x;
}

int lcm(int x, int y) {
	return x * y / gcd(x, y);
}

int main()
{
	int p = 0, d, day = 01;

	for (int i = 1; i <= 3; i++) {
		scanf("%d %d", &a[i], &b[i]);

		if (p < a[i]) {
			p = a[i], d = b[i];
		}
	}

	int L = lcm(lcm(a[1], a[2]), a[3]);

	for (int i = d; i <= L; i += p) {
		if ((i - 1) % a[1] + 1 == b[1] && (i - 1) % a[2] + 1 == b[2] && (i - 1) % a[3] + 1 == b[3]) {
			day = i;
			break;
		}
	}

	printf("%d\n", day);

	return 0;
}