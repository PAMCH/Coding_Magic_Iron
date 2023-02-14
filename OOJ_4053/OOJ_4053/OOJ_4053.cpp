#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#define N 10

int n, a[N];

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
	int G, L;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}

	G = L = a[1];

	for (int i = 2; i <= n; i++) {
		G = gcd(G, a[i]);
		L = lcm(L, a[i]);
	}

	printf("%d\n%d\n", G, L);

	return 0;
}