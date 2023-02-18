#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstring>

int main()
{
	int raw, col;

	int draw[8] = { -1,-1,0,1,1,1,0,-1 }, dcol[8] = { 0,1,1,1,0,-1,-1,-1 };

	scanf("%d %d", &raw, &col);

	for (int i = 0; i < 8; i++)
		printf("%d %d\n", raw + draw[i], col + dcol[i]);

	return 0;
}