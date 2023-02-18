#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstring>

int main()
{
	int high, raw, col;

	int dhigh[6] = { 0,0,0,0,-1,1 };
	int draw[6] = { 0,1,0,-1,0,0 };
	int dcol[6] = { 1,0,-1,0,0,0 };

	scanf("%d %d %d", &high, &raw, &col);

	for (int i = 0; i < 6; i++)
		printf("%d %d %d\n", high+dhigh[i], raw + draw[i], col + dcol[i]);

	return 0;
}