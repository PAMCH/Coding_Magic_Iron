#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

inline int max2(int x, int y) {
	return x > y ? x : y;
}

inline int min2(int x, int y) {
	return x < y ? x : y;
}

int main()
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	printf("%d\n", max2(max2(a, b), c));
	printf("%d\n", min2(min2(a, b), c));

	return 0;
}