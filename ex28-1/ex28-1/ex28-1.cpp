#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int square(int x) {
	return x * x;
}

int main()
{
	int a;

	scanf("%d", &a);

	a = square(a);
	printf("%d\n", a);

	return 0;
}