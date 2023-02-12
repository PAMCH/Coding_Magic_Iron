#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	long long a, b;
	scanf("%lld %lld", &a, &b);

	printf("%lld\n", a > b ? a - b : b - a);

	return 0;
}