#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstring>

int main()
{
	int raw, col;

	int draw[8] = { -2,-1,1,2,2,1,-1,2 }, dcol[8] = { 1,2,2,1,-1,-2,-2,-1 };

	scanf("%d %d", &raw, &col);

	for (int i = 0; i < 8; i++)
		printf("%d %d\n", raw + draw[i], col + dcol[i]);

	return 0;
}