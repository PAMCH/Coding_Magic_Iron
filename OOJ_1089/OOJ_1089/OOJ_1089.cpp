#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int D, H, M;
	int m1, m2;

	scanf("%d %d %d", &D, &H, &M);

	m1 = 11 * 24 * 60 + 11 * 60 + 11;
	m2 = D * 24 * 60 + H * 60 + M;

	printf("%d\n", m2 - m1 < 0 ? -1 : m2 - m1);

	return 0;
}