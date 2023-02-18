#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

void square(int* x) {
	*x *= *x;
}

int main()
{
	int a;

	scanf("%d", &a);

	square(&a);
	printf("%d\n", a);

	return 0;
}