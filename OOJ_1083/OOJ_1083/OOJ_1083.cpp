#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int r, m, y, i;
	double money;

	scanf("%d %d %d", &r, &m, &y);

	money = m;

	for (i = 1; i <= y; i++) {
		money *= (1 + 0.01 * r);
	}

	printf("%d\n", int(money));

	return 0;
}