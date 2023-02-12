#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int n, b = 1, d = 0;
	scanf("%d", &n);

	while (n)
	{
		d += b * (n % 10);
		b *= 2;
		n /= 10;
	}

	printf("%d\n", d);

	return 0;
}