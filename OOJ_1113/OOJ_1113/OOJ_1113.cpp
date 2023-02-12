#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int n, m, a;
	long long r, c;

	scanf("%d %d %d", &n, &m, &a);

	r = (n - 1) / a + 1;
	c = (m - 1) / a + 1;

	printf("%lld\n", r * c);

	return 0;
}