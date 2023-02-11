#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int a, b, c, max;

	scanf("%d %d %d", &a, &b, &c);

	max = a > b ? a : b;
	max = c > max ? c : max;
	printf("%d\n", max);

	return 0;
}