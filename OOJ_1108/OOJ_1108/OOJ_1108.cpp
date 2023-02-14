#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

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
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d %d\n", a * b / gcd(a, b), gcd(a, b));

	return 0;
}