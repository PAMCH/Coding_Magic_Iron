#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>



int main()
{
	char a = (1 << 7) - 1;
	short b = (1 << 15) - 1;
	int c = (1 << 31) - 1;
	long long d = (1LL << 63) - 1;

	printf("%hhd\n%hd\n%d\n%lld\n", a, b, c, d);

	return 0;
}