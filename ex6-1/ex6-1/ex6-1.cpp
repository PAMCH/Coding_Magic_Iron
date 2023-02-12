#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
	int a[3][6] = { {0},{0,4,7,6,8,11},{0,-3,8,11,5,13} };
	int i, j, sum = 0;

	for (i = 1; i <= 2; i++) {
		for (j = 1; j <= 5; j++) {
			sum += a[i][j];
		}
	}

	printf("%d\n", sum);

	return 0;
}