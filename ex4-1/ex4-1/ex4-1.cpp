#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int n;

	scanf("%d", &n);

	printf("%d\n%d\n%d\n%d\n", int(round(n / 10.0) * 10), int(ceil(n / 10.0) * 10), int(floor(n / 10.0) * 10), int(trunc(n / 10.0) * 10));

	return 0;
}