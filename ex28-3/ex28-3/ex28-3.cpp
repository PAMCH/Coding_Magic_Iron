#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

void swap(int& x, int& y, int& z) {
	int temp = z;
	z = y;
	y = x;
	x = temp;
}

int main()
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	swap(a, b, c);
	printf("%d %d %d\n", a, b, c);

	return 0;
}