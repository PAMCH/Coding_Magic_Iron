#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

void magic(int a, int b, int c = 30) {
	printf("%d %.2lf\n", a + b + c, double(a + b + c) / 3);
}

int main()
{
	magic(100, 88, 99);
	magic(80, 92, 85);
	magic(95, 88);
	magic(70, 100);
	magic(75, 85, 50);

	return 0;
}