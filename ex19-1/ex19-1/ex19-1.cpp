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

int lcm(int x, int y) {
	return x * y / gcd(x, y);
}

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	printf("%d\n%d\n", gcd(gcd(a, b), c),lcm(lcm(a,b),c));

	return 0;
}