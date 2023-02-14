#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#define N 100

int n, a[N];
long long sum;

int gcd(int x, int y) {
	while (y)
	{
		int r = x % y;
		x = y;
		y = r;
	}

	return x;
}

int main()
{
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 1; i <= n - 1; i++) {
		for (int j = i + 1; j <= n; j++) {
			sum += gcd(a[i], a[j]);
		}
	}

	printf("%lld\n", sum);

	return 0;
}